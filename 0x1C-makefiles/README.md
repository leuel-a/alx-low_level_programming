<h1>C - Makefiles</h1>

<h2>Overview of <pre>make</pre></h2>
<p>The make utility automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.<br>
To prepare to use make, you must write a file called the makefile that describes the relationships among files in your program and provides 
commands for updating each file. In a program, typically, the executable file is updated from object files, which are in turn made by compiling 
source files.

Once a suitable makefile exists, each time you change some source files, this simple shell command:<br>
<pre>make</pre>
</p>
