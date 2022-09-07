<h1>Doubly linked lists</h1>
<p>A <b>doubly linked list</b> is a linked data structure that consists of a set of 
sequentially linked records called nodes. Each node contains three fields: two
 link fields and one data field. It contains an extra pointer, typically called a
<i>previous pointer</i>, together with the next pointer an data which are there in 
the singly linked list.</p>

<p>The data structure used in this project:</p>
<pre>
/&#42&#42
 &#42 struct dlistint_s - doubly linked list
 &#42 @n: integer
 &#42 @prev: points to the previous node
 &#42 @next: points to the next node
 &#42
 &#42 Description: doubly linked list node structure
 &#42 
 &#42/
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</pre>
