<?php
/**
 * @file
 * prima_organization.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function prima_organization_taxonomy_default_vocabularies() {
  return array(
    'type_of_organization' => array(
      'name' => 'Type of organization',
      'machine_name' => 'type_of_organization',
      'description' => 'Type of organization',
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
