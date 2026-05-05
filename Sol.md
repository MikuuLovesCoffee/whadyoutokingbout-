# Hash table: an array [hash function and way to handle collisions]

fast lookup, insert, delete using math instead of scanning



hashmap stores (key : value) apple : 5, userid : 4 ..... need to store data associated with a key

hashset (value only ) {3,6,1} using for to check something exist or not 



FOR HASHSET : 
  1) storage (buckets) each bucket can hold more value
  2) hash function : where should this value go
  3) collision handling : 2 value can go in 1 bucket, sol : storing in linked list inside that bucket

Logic : 

 all buckets : empty 

 read first : n = 3, compute hash -- bucket index -- go to bucket -- check -- is 3 there? -- no -- insert 3

 next n = 1, same process

 duplicate : n = 3, same, found 3, stop. 

 

