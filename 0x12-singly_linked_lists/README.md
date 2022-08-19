<h1>Singly Linked List </h1>
<hr>

<h2> Linked List </h2>
<p>A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
 The elements in a linked list are linked using pointers. It is a random access data structure. Each node of a linked 
list includes the link the next node. </p>

<h2> Singly Linked List </h2>
<p> A singly linked list is a type of linked list that is unidirectional, that is, it can be traversed in only one direction from head to the last node (tail).
<br> The first node is called the head; it points to the first node of the list and helps us access every other element in the list. The last node, also sometimes 
called the tail, points to NULL which helps us in determining when the list ends. </p>

<h3> Example of a Singly Linked List </h3>

<pre>
<p> struct Node {
        int data;
        struct Node *link;
};

<pre>
<p> The above is a simple implementation of a linked list that contains only a single data within it </p>

