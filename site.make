; Core version
; ------------
core = 6.x
api = 2

projects[drupal][version] = 6.22

includes[skolr] = 'skolr.make'

projects[admin][version] = 2.0
projects[admin][subdir] = "contrib"

projects[autoassignrole][version] = 2.0-beta1
projects[autoassignrole][subdir] = "contrib"

projects[computed_field][version] = 1.0-beta5
projects[computed_field][subdir] = "contrib"


projects[ctools][version] = 1.8
projects[ctools][subdir] = "contrib"
; enable page_manager, views_content

projects[adminrole][version] = 1.3
projects[adminrole][subdir] = "contrib"

projects[date][version] = 2.7
projects[date][subdir] = "contrib"
; enable date_api, date_timezone

projects[features][version] = 1.1
projects[features][subdir] = "contrib"

projects[diff][version] = 2.3
projects[diff][subdir] = "contrib"

projects[cck][version] = 2.9
projects[cck][subdir] = "contrib"
; enable text, fieldgroup, number, optionwidgets, content

projects[cck_count][version] = 1.x-dev
projects[cck_count][subdir] = "contrib"

projects[geo][version] = 1.0-alpha5
projects[geo][subdir] = "contrib"
; enable geo_field

projects[gmap][version] = 1.1
projects[gmap][subdir] = "contrib"

projects[gmap_geo][version] = 1.x-dev
projects[gmap_geo][subdir] = "contrib"

projects[imagecache][version] = 2.0-beta12
projects[imagecache][subdir] = "contrib"

projects[imagefield][version] = 3.10
projects[imagefield][subdir] = "contrib"

projects[jquery_update][version] = 2.x-dev
projects[jquery_update][subdir] = "contrib"

projects[jquery_ui][version] = 1.5
projects[jquery_ui][subdir] = "contrib"

libraries[jquery_ui][download][type] = file
libraries[jquery_ui][download][url] = http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip
libraries[jquery_ui][download][sha1] = 7707d98bce0c90b06fdd3cd3acbf53c46a2aceb5
libraries[jquery_ui][directory_name] = jquery.ui

projects[lightbox2][version] = 1.11
projects[lightbox2][subdir] = "contrib"

projects[link][version] = 2.9
projects[link][subdir] = "contrib"

projects[location][version] = 3.1
projects[location][subdir] = "contrib"

projects[nodeformcols][version] = 1.6
projects[nodeformcols][subdir] = "contrib"

projects[og][version] = 2.1
projects[og][subdir] = "contrib"
; enable og_views

projects[og_reg_keys][version] = 1.4
projects[og_reg_keys][subdir] = "contrib"

projects[override_node_options][version] = 1.12
projects[override_node_options][subdir] = "contrib"

projects[panels][version] = 3.9
projects[panels][subdir] = "contrib"
; enable panels_mini, taxonomy

projects[strongarm][version] = 2.0
projects[strongarm][patch][] = "http://drupal.org/files/issues/792472_15_node_pipe.patch"
projects[strongarm][subdir] = "contrib"

projects[transliteration][version] = 3.0
projects[transliteration][subdir] = "contrib"

projects[vertical_tabs][version] = 1.0-rc2
projects[vertical_tabs][subdir] = "contrib"

projects[views_hacks][version] = 1.0-beta2
projects[views_hacks][subdir] = "contrib"
; enable views_filters_reset

projects[imageapi][version] = 1.10
projects[imageapi][subdir] = "contrib"

projects[filefield][version] = 3.10
projects[filefield][subdir] = "contrib"

projects[views][version] = 3.x-dev
projects[views][subdir] = "contrib"
