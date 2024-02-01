# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'Програмирање I за информатичке профиле у електротехничким школама'
copyright = '2023, Фондација Петља'
author = 'Велимир Радловачки'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [ "myst_parser",
               "sphinx_design",
               "sphinx_copybutton",
               "plct_bulder_for_sphinx.builder.plct_builder",
               "plct_sphinx_components.extensions.notes",
               "plct_sphinx_components.extensions.multiple_choice",            
               "plct_sphinx_components.extensions.fill_in_the_blank"]

myst_enable_extensions = [ "colon_fence",
                           "dollarmath",
                           "html_admonition" ]
templates_path = ['_templates']
exclude_patterns = []
language = 'sr-Cyrl'


import plct_sphinx_components
html_static_path = plct_sphinx_components.extensions.static_dirs()


# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_title = 'Програмирање I за информатичке профиле у електротехничким школама'


html_theme = 'alabaster'
html_theme_options = {
    'show_powered_by' : False,
    'caption_font_size': '32px',
    'caption_font_family': 'Source Sans Pro',
    'font_family': 'Source Sans Pro',
    'font_size': '16px',
    'pre_bg' : '#f8f8f8',
    'page_width': '840px',
}
html_css_files = [
    'https://fonts.googleapis.com/css?family=Source+Sans+Pro',
]
html_context = {
    'theme_nosidebar': True,
}
html_show_copyright = False
html_show_sourcelink = False




#additional_build_targets =['scorm' , 'moodle']
content_uri = 'https://petljastorage.blob.core.windows.net/kursevi/2023/etit1_prog/'
