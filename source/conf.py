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
html_theme = 'furo'
