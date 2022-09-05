<h1>C - Dynamic libraries </h1>
<p>A dynamic library is a programming concept in which shared libraries with 
special functionalities are launched only during program execution, which minimizes 
overall program size and facilitates improved application performance for reduced 
memory consumption.</p>
<h2>How does a Dynamic Library work?</h2>
<p>Dynamic libraries (also called shared libraries) are linked into the program in <b>two stages</b>.
<br><br>First, during compile time, the linker verifies that all the symbols (again, functions, variables, 
and the like) required by the program, are either linked into the program or in one of its dynamic 
libraries. However, the object files from the dynamic library are not inserted into the executable 
file. <br><br>Instead, when the program is started, a program in the system (called a dynamic loader) checks 
out which shared libraries were linked with the program, loads them to memory, and attaches them to 
the copy of the program in memory.</p>
