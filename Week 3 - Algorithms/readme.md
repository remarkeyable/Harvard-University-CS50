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
