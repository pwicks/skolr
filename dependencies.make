; Core version
; ------------
core = 6.x
api = 2

projects[drupal][version] = 6.22

projects[skolr][type] = module
projects[skolr][download][type] = git
projects[skolr][download][url] = git@github.com:ezwart/skolr.git

projects[admin][version] = 2.0

projects[autoassignrole][version] = 2.0-beta1
projects[computed_field][version] = 1.0-beta5
projects[ctools][version] = 1.8
; enable page_manager, views_content

projects[adminrole][version] = 1.3

projects[date][version] = 2.7
; enable date_api, date_timezone

projects[features][version] = 1.1
projects[cck][version] = 2.9
; enable text, fieldgroup, number, optionwidgets, content
projects[cck_count][version] = 1.x-dev

projects[geo][version] = 1.0-alpha5
; enable geo_field

projects[gmap][version] = 1.1
projects[gmap_geo][version] = 1.x-dev
projects[imagecache][version] = 2.0-beta12
projects[imagefield][version] = 3.10

projects[jquery_update][version] = 2.x-dev
projects[jquery_ui][version] = 1.5

libraries[jquery_ui][download][type] = file
libraries[jquery_ui][download][url] = http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip
libraries[jquery_ui][download][sha1] = 7707d98bce0c90b06fdd3cd3acbf53c46a2aceb5
libraries[jquery_ui][directory_name] = jquery.ui

projects[services][version] = 2.x-dev
projects[deploy][version] = 1.x-dev

projects[lightbox2][version] = 1.11
projects[link][version] = 2.9
projects[location][version] = 3.1
projects[nodeformcols][version] = 1.6
projects[og][version] = 2.1
; enable og_views

projects[og_reg_keys][version] = 1.4

projects[override_node_options][version] = 1.12
projects[panels][version] = 3.9
; enable panels_mini, taxonomy

projects[strongarm][version] = 2.0
projects[strongarm][patches][] = "http://drupal.org/files/issues/792472_15_node_pipe.patch"

projects[transliteration][version] = 3.0
projects[vertical_tabs][version] = 1.0-rc2
projects[views_hacks][version] = 1.0-beta2
; enable views_filters_reset

projects[imageapi][version] = 1.10
projects[filefield][version] = 3.10


projects[views][version] = 3.x-dev

