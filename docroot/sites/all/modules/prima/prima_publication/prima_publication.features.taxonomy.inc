<?php
/**
 * @file
 * prima_publication.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function prima_publication_taxonomy_default_vocabularies() {
  return array(
    'publication_type' => array(
      'name' => 'Publication type',
      'machine_name' => 'publication_type',
      'description' => 'Publication type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
