# EntsDatabase
Abstract smart database server for information storage and analysis

C++ server that maintains an abstract knowledge database that can be modified and analyzed using a command protocol.

Not executable yet.
Work in progress.
May expose the C++ class as a library if useful, but that might be too unwieldy.

Stores abstract information by limiting acceptable information to objects and their properties, as well as sets of objects.
These limitations allow for an infinite dimensional object space that can be modeled as a complex directed acyclic graph/tree.
Information is stored in the graph as nodes that represent unordered sets of objects. Graphs have two types of edges: a directed edge for set membership, and an undirected edge for set exclusion.

Each set-node has a unique ID for easy lookup and portability. This allows information to be encoded as a language-agnostic graph and easily serialized.

Graph files will contain language-agnostic information about the properties of objects, while separate language files will store how to represent the sets and objects in that particular language.
At first linguistic representation will be simple, but further systems will allow people that speak different languages to share and read the same information.
The object-language data file enables the display of the objective information to the user via a language interface (text).

The server can receive new information encoded as graphs to be merged with the database graph.
New information is tested for logical integrity and against the existing database graph. If the tests pass, new nodes are added, and edges are added to the reduced graph.
By rejecting new information that either has internal logical conflict or conflict with the existing graph, the graph can never "knowlingly" enter into an illegal state that is not internally logical.
Read and write commands are received asynchronously to a queue and performed synchronously. Asynchronous processing by mutex locking branches of the graph is not a priority.
Information rejection or acceptance is sent back to the client to handle asynchronously.

Theoretical nodes are used to represent special information states where it is know that a set exists but we don't know what it is.
These theoretical nodes enable the representation of all possible knowledge information states of objects and their properties using only 2 types of edges in the graph.
If two sets partially overlap, the reduced graph will not represent this fact, but it can be calculated by seeing if objects exist that prove they overlap.
Set relationship caching could be used to speed up calculation.

The reduced graph has efficiencies in data storage for some cases, because the reduced edges can be used to confer properties to all subsets, for a tradeoff with computation.
The reduced graph forms a complex tree where the theoretical root is "the set of everything" and the leaves are individual objects.
All nodes are defined by predicates that determine set membership, so this forms an abstract infinite dimensional object-property space to represent general information states.
This allows us to define all graph calculations from the fundamental basis of set theory.

Because the database models information snapshots using a calculable space, this allows for abstract algorithms to be formed that take and return objects.
These abstract algorithms will be used to perform archetypal tasks that apply to many things.
These data structures and algorithms provide generalized logical computing, though many optomizations may be needed for certain medium-sized information sets, in particular ordered sets of objects.
Ordered sets represent low-entropy states of information that do not scale well with this type of graph and will be handled eventually with its own purpose-built system.

While the graph provides a calculable space it might not be the best for computation, so while other equivalent systems might be better, the graph is fine for now.
Likely a vector formulation will be needed to represent information for algebraic asynchronous calculation.
While asynchronous computation might fit best with a vector formulation, we can still perform asynchronous reads on a graph using multiple node-traversing services to utilize computing power.

The difficult math becomes accounting for all of the needed possible tests and permutations to the graph, how to find redundant edges and maintain graph integrity.

