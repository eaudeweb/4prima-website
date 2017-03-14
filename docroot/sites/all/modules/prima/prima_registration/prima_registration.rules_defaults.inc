<?php
/**
 * @file
 * prima_registration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function prima_registration_default_rules_configuration() {
  $items = array();
  $items['rules_event_registration_send_email'] = entity_import('rules_config', '{ "rules_event_registration_send_email" : {
      "LABEL" : "Event registration send email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : { "registration_insert" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "registration:author" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "[[site:name]] A new event registration has been submitted.",
            "message" : "A new registration to \\u003Cstrong\\u003E[registration:entity:title]\\u003C\\/strong\\u003E was submitted.\\u003Cbr\\/\\u003E\\r\\nTo view registration, follow this link: \\u003Ca href=\\u0022[site:url]registration\\/[registration:registration-id]\\u0022\\u003E[site:url]registration\\/[registration:registration-id]\\u003C\\/a\\u003E\\u003Cbr\\/\\u003E\\r\\nRegistration email: \\u003Cstrong\\u003E[registration:anon-mail]\\u003C\\/strong\\u003E\\u003Cbr\\/\\u003E\\r\\nRegistration contact name: \\u003Cstrong\\u003E[registration:field_reg_contact_name]\\u003C\\/strong\\u003E\\u003Cbr\\/\\u003E\\r\\nRegistration date: \\u003Cstrong\\u003E[registration:created]\\u003C\\/strong\\u003E\\u003Cbr\\/\\u003E\\u003Cbr\\/\\u003E\\r\\n[site:name]\\u003Cbr\\/\\u003E\\r\\n[site:slogan]\\u003Cbr\\/\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
