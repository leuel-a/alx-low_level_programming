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

<h2> How to create a Shared/Dynamic Library</h2>
<p>A shared library or shared object is a file that is intended to be shared by multiple programs. Symbols 
used by a program are loaded from shared libraries into memory at load time or runtime.i<br><br>'.so' files are dynamic 
libraries. The suffix stands for "shared object", because all the applications that are linked with the library 
use the same file, rather than making a copy in the resulting executable.</p>

<p>Shared Libraries should be compiled as <i>position-independet code</i>. The code within a dynamic executable is 
typically position-dependent, and is tied to a fixed address in memory. Shared objects, on the other hand, can be loaded 
at different addresses in different processes. Position-independent code is not tied to a specific address. This independence 
allows the code to execute efficiently at a different address in each process that uses the code. Position-independent code 
is recommended for the creation of shared objects. </p>

<p>If a shared object is built from position-dependent code, the text segment can require modification at runtime. This 
modification allows relocatable references to be assigned to the location that the object has been loaded. The relocation of the 
text segment requires the segment to be remapped as writable. This modification requires a swap space reservation, and results in 
a private copy of the text segment for the process. The text segment is no longer sharable between multiple processes. Position-dependent 
code typically requires more runtime relocations than the corresponding position-independent code. Overall, the overhead of 
processing text relocations can cause serious performance degradation.</p>

<p>When a shared object is built from position-independent code, relocatable references are generated as indirections through data in 
the shared object's data segment. The code within the text segment requires no modification. All relocation updates are applied to 
corresponding entries within the data segment.</p>

<h3>Global Offset Table</h3>
<p>Position-independent code cannot, in general, contain absolute virtual addresses. Global offset tables hold absolute addresses in 
private data. Addresses are therefore available without compromising the position-independence and shareability of a program's text. 
A program references its GOT using position-independent addressing and extracts absolute values. This technique redirects position-independent 
references to absolute locations. Global Offset Table(GOT) contains entries of functions that will be dynamically linked</p>

<h3>Steps for creating a <i>shared library</i>:</h3>

1. <pre>gcc -Wall -Werror -std=gnu89 -Wextra -pedantic -fpic -c source1.c source2.c</pre>


