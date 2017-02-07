module.exports = function (grunt) {
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-postcss');

  grunt.initConfig({
    watch: {
      files: "less/*.less",
      tasks: ["less", "postcss"]
    },
    less: {
      development: {
        options: {
          paths: ["less/"],
          outputSourceFiles: true,
          sourceMap: true,
          sourceMapFilename: 'css/style.css.map',
          sourceMapURL: 'style.css.map',
          strictMath: true,
        },
        files: {
          "css/style.css": "less/style.less"
        }
      }
    },
    postcss: {
      options: {
        map: true,
        processors: [
          require('autoprefixer')
        ]
      },
      core: {
        src: 'css/*.css'
      }
    }
  });
  grunt.registerTask('default', ['watch']);
};