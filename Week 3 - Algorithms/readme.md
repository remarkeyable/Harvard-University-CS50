<h1>Problem Set 3</h1>
<h2>Plurality</h2>
<h2>Specification</h2>

<ul>
<li>Complete the vote function.</li>
<ul>
<li>vote takes a single argument, a string called name, representing the name of the candidate who was voted for.</li>
<li>If name matches one of the names of the candidates in the election, then update that candidate’s vote total to account for the new vote. The vote function in this case should return true to indicate a successful ballot.</li>
<li>If name does not match the name of any of the candidates in the election, no vote totals should change, and the vote function should return false to indicate an invalid ballot.</li>
<li>You may assume that no two candidates will have the same name.</li>
</ul>
<li>Complete the print_winner function.</li>
<ul>
<li>The function should print out the name of the candidate who received the most votes in the election, and then print a newline.</li>
<li>It is possible that the election could end in a tie if multiple candidates each have the maximum number of votes. In that case, you should output the names of each of the winning candidates, each on a separate line.</li>
</ul>  
</ul>
<p><em>You should not modify anything else in plurality.c other than the implementations of the vote and print_winner functions (and the inclusion of additional header files, if you’d like).</em></p>
<img src="assets/1.png">

---

<h2>Runoff</h2>
<h2>Specification</h2>

<p>Complete the implementation of runoff.c in such a way that it simulates a runoff election. You should complete the implementations of the vote, tabulate, print_winner, find_min, is_tie, and eliminate functions, and you should not modify anything else in runoff.c (and the inclusion of additional header files, if you’d like).</p>

<h3>Vote</h3>
<ul>
<li>The function takes arguments voter, rank, and name. If name is a match for the name of a valid candidate, then you should update the global preferences array to indicate that the voter voter has that candidate as their rank preference (where 0 is the first preference, 1 is the second preference, etc.).</li>
<li>If the preference is successfully recorded, the function should return true; the function should return false otherwise (if, for instance, name is not the name of one of the candidates).</li>  
<li>You may assume that no two candidates will have the same name.</li>  

</ul>
<h3>Tabulate</h3>

<ul>
<li>The function should update the number of votes each candidate has at this stage in the runoff.</li>
<li>Recall that at each stage in the runoff, every voter effectively votes for their top-preferred candidate who has not already been eliminated.</li>  
</ul>



</ul>
<h3>Print Winner</h3>

<ul>
<li>If any candidate has more than half of the vote, their name should be printed and the function should return true.</li>
<li>If nobody has won the election yet, the function should return false.</li>  
</ul>




</ul>
<h3>Find Min</h3>

<ul>
<li>The function should return the minimum vote total for any candidate who is still in the election.</li>
</ul>


  



