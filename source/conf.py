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

extensions = ["myst_parser", "sphinx_design", "sphinx_copybutton"]
myst_enable_extensions = ["colon_fence", "dollarmath"]

templates_path = ['_templates']
exclude_patterns = []

language = 'sr'

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_title = 'Програмирање I за информатичке профиле у електротехничким школама'
html_theme = 'furo'
html_static_path = ['_static']
