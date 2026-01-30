# PowerShell script to add sample tests to remaining questions

# Data Structures - Remaining
$dataStructureTests = @{
    "03-thread-safe-queue.md" = @"

## Sample Tests

### Sample Test 1: Concurrent Enqueue/Dequeue
``````java
// Input
ThreadSafeQueue<Integer> queue = new ThreadSafeQueue<>(5);
Thread producer = new Thread(() -> {
    for (int i = 1; i <= 3; i++) {
        queue.enqueue(i);
        System.out.println("Produced: " + i);
    }
});
Thread consumer = new Thread(() -> {
    for (int i = 0; i < 3; i++) {
        Integer val = queue.dequeue();
        System.out.println("Consumed: " + val);
    }
});
producer.start();
consumer.start();

// Output
Produced: 1
Consumed: 1
Produced: 2
Consumed: 2
Produced: 3
Consumed: 3
``````

### Sample Test 2: Blocking on Empty Queue
``````java
// Input
ThreadSafeQueue<String> queue = new ThreadSafeQueue<>(3);
Thread consumer = new Thread(() -> {
    System.out.println("Waiting for item...");
    String item = queue.dequeue();  // Blocks until item available
    System.out.println("Got: " + item);
});
consumer.start();
Thread.sleep(2000);
queue.enqueue("Hello");

// Output
Waiting for item...
(2 second pause)
Got: Hello
``````
"@

    "04-trie-autocomplete.md" = @"

## Sample Tests

### Sample Test 1: Autocomplete Suggestions
``````java
// Input
Trie trie = new Trie();
trie.insert("apple");
trie.insert("app");
trie.insert("application");
trie.insert("apply");

List<String> suggestions = trie.findWordsWithPrefix("app");
System.out.println(suggestions);

// Output
[app, apple, application, apply]
``````

### Sample Test 2: Word Deletion
``````java
// Input
Trie trie = new Trie();
trie.insert("cat");
trie.insert("car");
trie.insert("card");

System.out.println(trie.search("car"));  // true
trie.delete("car");
System.out.println(trie.search("car"));  // false
System.out.println(trie.search("card")); // true (not affected)

// Output
true
false
true
``````
"@
}

Write-Host "Sample test templates created for data structures"
