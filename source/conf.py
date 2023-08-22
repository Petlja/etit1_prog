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
               "sphinxpackagingtool.builder.petlja_builder",
               "petlja_sphinx_extensions.extensions.notes",
               "petlja_sphinx_extensions.extensions.multiple_choice",            
               "petlja_sphinx_extensions.extensions.fill_in_the_blank"]

myst_enable_extensions = [ "colon_fence",
                           "dollarmath",
                           "html_admonition" ]
templates_path = ['_templates']
exclude_patterns = []
language = 'sr'
import petlja_sphinx_extensions
html_static_path = petlja_sphinx_extensions.extensions.static_dirs()


# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_title = 'Програмирање I за информатичке профиле у електротехничким школама'


html_theme = 'alabaster'
html_theme_options = {
    'show_powered_by' : False,
    'caption_font_size': '32px',
    'caption_font_family': 'Source Sans Pro',
    #code_font_size: Font size of code block text.
    #code_font_family: Font family of code block text. Defaults to 'Consolas', 'Menlo', 'DejaVu Sans Mono', 'Bitstream Vera Sans Mono', monospace.
    'font_family': 'Source Sans Pro',
    'font_size': '16px',
    #head_font_family: Font family of headings. Defaults to 'Garamond', 'Georgia',
    'pre_bg' : '#f8f8f8'
}
html_context = {
    'theme_nosidebar': True,
}
html_show_copyright = False
html_show_sourcelink = False




#additional_build_targets =['scorm']
content_uri = 'https://petljamediastorage.blob.core.windows.net/temp/etit1_prog'
