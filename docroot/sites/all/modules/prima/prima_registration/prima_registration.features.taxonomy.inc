<?php
/**
 * @file
 * prima_registration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function prima_registration_taxonomy_default_vocabularies() {
  return array(
    'type_of_participation' => array(
      'name' => 'Type of participation',
      'machine_name' => 'type_of_participation',
      'description' => 'Type of participation',
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
