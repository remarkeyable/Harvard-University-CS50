<h1>Lab 7: Songs</h1>
<p>Write SQL queries to answer questions about a database of songs.</p>
<h2>Implementation Details</h2>
<p>For each of the following problems, you should write a single SQL query that outputs the results specified by each problem. Your response must take the form of a single SQL query, though you may nest other queries inside of your query. You should not assume anything about the ids of any particular songs or artists: your queries should be accurate even if the id of any particular song or person were different. Finally, each query should return only the data necessary to answer the question: if the problem only asks you to output the names of songs, for example, then your query should not also output each song’s tempo.</p>
<ol type="1">
<li>
In 1.sql, write a SQL query to list the names of all songs in the database.
<ul>
  <li>Your query should output a table with a single column for the name of each song.</li>
</ul>
</li>

<li>
In 2.sql, write a SQL query to list the names of all songs in increasing order of tempo.
<ul>
  <li>Your query should output a table with a single column for the name of each song.</li>
</ul>
</li>

<li>
In 3.sql, write a SQL query to list the names of the top 5 longest songs, in descending order of length.
<ul>
  <li>Your query should output a table with a single column for the name of each song..</li>
</ul>
</li>


<li>
In 4.sql, write a SQL query that lists the names of any songs that have danceability, energy, and valence greater than 0.75.
<ul>
  <li>Your query should output a table with a single column for the name of each song.</li>
</ul>
</li>


<li>
In 5.sql, write a SQL query that returns the average energy of all the songs.
<ul>
  <li>Your query should output a table with a single column for the name of each song.</li>
</ul>
</li>




<li>
In 5.sql, write a SQL query that returns the average energy of all the songs.
<ul>
  <li>Your query should output a table with a single column and a single row containing the average energy.</li>
</ul>
</li>


<li>
In 6.sql, write a SQL query that lists the names of songs that are by Post Malone.
<ul>
  <li>Your query should output a table with a single column for the name of each song.</li>
  <li>You should not make any assumptions about what Post Malone’s artist_id is.</li>
</ul>
</li>


<li>
In 7.sql, write a SQL query that returns the average energy of songs that are by Drake.
<ul>
  <li>Your query should output a table with a single column and a single row containing the average energy.</li>
  <li>You should not make any assumptions about what Drake’s artist_id is.</li>
</ul>
</li>


<li>
In 8.sql, write a SQL query that lists the names of the songs that feature other artists.
<ul>
  <li>Songs that feature other artists will include “feat.” in the name of the song.</li>
   <li>Your query should output a table with a single column for the name of each song.</li>
</ul>
</li>
 
</ol>

<img src="assets/1.png">


---

<h1>Movies</h1>
<h2>Specification</h2>
<p>For each of the following problems, you should write a single SQL query that outputs the results specified by each problem. Your response must take the form of a single SQL query, though you may nest other queries inside of your query. You should not assume anything about the ids of any particular movies or people: your queries should be accurate even if the id of any particular movie or person were different. Finally, each query should return only the data necessary to answer the question: if the problem only asks you to output the names of movies, for example, then your query should not also output each movie’s release year.</p>


<img src="assets/2.png">


---

<h1>Fiftyville</h1>

<h2>A Mystery in Fiftyville</h2>
<p>The CS50 Duck has been stolen! The town of Fiftyville has called upon you to solve the mystery of the stolen duck. Authorities believe that the thief stole the duck and then, shortly afterwards, took a flight out of town with the help of an accomplice. Your goal is to identify:</p>
<ul>
  <li>Who the thief is,</li>
   <li>What city the thief escaped to, and</li>
   <li>Who the thief’s accomplice is who helped them escape</li>
</ul>
<p>All you know is that the theft took place on July 28, 2021 and that it took place on Humphrey Street.</p>
<p>How will you go about solving this mystery? The Fiftyville authorities have taken some of the town’s records from around the time of the theft and prepared a SQLite database for you, fiftyville.db, which contains tables of data from around the town. You can query that table using SQL SELECT queries to access the data of interest to you. Using just the information in the database, your task is to solve the mystery.</p>



<img src="assets/3.png">


