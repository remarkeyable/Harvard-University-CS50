<h1>Lab 5: Inheritance</h1>

<h2>Implementation Details</h2>
<p>Complete the implementation of inheritance.c, such that it creates a family of a specified generation size and assigns blood type alleles to each family member. The oldest generation will have alleles assigned randomly to them.</p>
<ul>
  <li>The create_family function takes an integer (generations) as input and should allocate (as via malloc) one person for each member of the family of that number of generations, returning a pointer to the person in the youngest generation.</li>
  <ul>
    <li>For example, create_family(3) should return a pointer to a person with two parents, where each parent also has two parents.</li>
    <li>Each person should have alleles assigned to them. The oldest generation should have alleles randomly chosen (as by calling the random_allele function), and younger generations should inherit one allele (chosen at random) from each parent.</li>
    <li>Each person should have parents assigned to them. The oldest generation should have both parents set to NULL, and younger generations should have parents be an array of two pointers, each pointing to a different parent.</li>    
  </ul>
</ul>
<p>We’ve divided the create_family function into a few TODOs for you to complete.</p>
<ul>
  <li>First, you should allocate memory for a new person. Recall that you can use malloc to allocate memory, and sizeof(person) to get the number of bytes to allocate.</li>
  <li>Next, we’ve included a condition to check if generations > 1.</li>
  <ul>
    <li>If generations > 1, then there are more generations that still need to be allocated. We’ve already created two new parents, parent0 and parent1, by recursively calling create_family. Your create_family function should then set the parent pointers of the new person you created. Finally, assign both alleles for the new person by randomly choosing one allele from each parent.</li>
        <li>Otherwise (if generations == 1), then there will be no parent data for this person. Both parents of your new person should be set to NULL, and each allele should be generated randomly.</li>
  </ul>
  <li>Finally, your function should return a pointer for the person that was allocated.</li>
</ul>
<p>The free_family function should accept as input a pointer to a person, free memory for that person, and then recursively free memory for all of their ancestors.</p>
<ul>
  <li>Since this is a recursive function, you should first handle the base case. If the input to the function is NULL, then there’s nothing to free, so your function can return immediately.</li>
  <li>Otherwise, you should recursively free both of the person’s parents before freeing the child.</li>
</ul>
<img src="assets/inhertitance.png">

---

<h1>Speller</h1>
<h2>Specification</h2>
<p>Alright, the challenge now before you is to implement, in order, load, hash, size, check, and unload as efficiently as possible using a hash table in such a way that TIME IN load, TIME IN check, TIME IN size, and TIME IN unload are all minimized. To be sure, it’s not obvious what it even means to be minimized, inasmuch as these benchmarks will certainly vary as you feed speller different values for dictionary and for text. But therein lies the challenge, if not the fun, of this problem. This problem is your chance to design. Although we invite you to minimize space, your ultimate enemy is time. But before you dive in, some specifications from us.

</p>
<ul>
<li>You may not alter speller.c or Makefile.</li>
<li>You may alter dictionary.c (and, in fact, must in order to complete the implementations of load, hash, size, check, and unload), but you may not alter the declarations (i.e., prototypes) of load, hash, size, check, or unload. You may, though, add new functions and (local or global) variables to dictionary.c.</li>
<li>You may change the value of N in dictionary.c, so that your hash table can have more buckets.</li>
<li>You may alter dictionary.h, but you may not alter the declarations of load, hash, size, check, or unload.</li>
<li>Your implementation of check must be case-insensitive. In other words, if foo is in dictionary, then check should return true given any capitalization thereof; none of foo, foO, fOo, fOO, fOO, Foo, FoO, FOo, and FOO should be considered misspelled.</li>
<li>Capitalization aside, your implementation of check should only return true for words actually in dictionary. Beware hard-coding common words (e.g., the), lest we pass your implementation a dictionary without those same words. Moreover, the only possessives allowed are those actually in dictionary. In other words, even if foo is in dictionary, check should return false given foo's if foo's is not also in dictionary..</li>
<li>You may assume that any dictionary passed to your program will be structured exactly like ours, alphabetically sorted from top to bottom with one word per line, each of which ends with \n. You may also assume that dictionary will contain at least one word, that no word will be longer than LENGTH (a constant defined in dictionary.h) characters, that no word will appear more than once, that each word will contain only lowercase alphabetical characters and possibly apostrophes, and that no word will start with an apostrophe..</li>
<li>You may assume that check will only be passed words that contain (uppercase or lowercase) alphabetical characters and possibly apostrophes.</h1>
<li>Your spell checker may only take text and, optionally, dictionary as input. Although you might be inclined (particularly if among those more comfortable) to “pre-process” our default dictionary in order to derive an “ideal hash function” for it, you may not save the output of any such pre-processing to disk in order to load it back into memory on subsequent runs of your spell checker in order to gain an advantage..</li>
<li>Your spell checker must not leak any memory. Be sure to check for leaks with valgrind..</li>
<li>The hash function you write should ultimately be your own, not one you search for online. There are many ways to implement a hash function beyond using the first character (or characters) of a word. Consider a hash function that uses a sum of ASCII values or the length of a word. A good hash function tends to reduce “collisions” and has a fairly even distribution across hash table “buckets”..</li>

  
</ul>
