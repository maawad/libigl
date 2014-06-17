xhtml header:   <script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
css: default.css

# Introduction

TODO

# Index

* **100_FileIO**: Example of reading/writing mesh files
* **101_Serialization**: Example of using the XML serialization framework
* **102_DrawMesh**: Example of plotting a mesh

# Compilation Instructions

All examples depends on glfw, glew and anttweakbar. A copy
of the sourcecode of each library is provided together with libigl
and they can be precompiled using:

    sh compile_macosx.sh (MACOSX)
    sh compile_linux.sh (LINUX)
    compile_windows.bat (Visual Studio 2012)

Every example can be compiled by using the cmake file provided in its folder.
On Linux and MacOSX, you can use the provided bash script:

    sh ../compile_example.sh

This is an equation
 $a = bx$ 