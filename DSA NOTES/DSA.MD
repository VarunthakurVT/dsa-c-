# 📚 DSA Complete Exam Mastery Notes
### Your All-in-One Guide: Beginner → Advanced → Interview Ready

> **How to Use This Document:** Read sequentially for first-time learning. Use the Cheatsheet sections for quick revision. All code is in C++, Java, and Python.

---

# 🗂️ Table of Contents

1. [Stack](#1-stack)
2. [Queue](#2-queue)
3. [Linked List — Insert & Delete](#3-linked-list--insert--delete)
4. [Trees](#4-trees)
5. [Infix to Postfix Conversion](#5-infix-to-postfix-conversion)
6. [Pointers](#6-pointers)
7. [Stack vs Queue — Comparison](#comparison-stack-vs-queue)
8. [BFS vs DFS — Comparison](#comparison-bfs-vs-dfs)

---

# 1. STACK

---

## 1.1 Concept Explanation

### 📌 Definition
A **Stack** is a linear data structure that follows the **LIFO** (Last In, First Out) principle.
- The last element inserted is the first one to be removed.
- Think of a stack of plates — you always pick up the topmost plate.

### 🧠 Intuition
Imagine a pile of books:
- You can only add a new book on **top**.
- You can only remove the book from **top**.
- You cannot access any book below without removing those above.

### ❓ Why is it Used?
- **Controlled access** — Only top element is accessible (safe, predictable).
- **Backtracking** — Naturally stores history (undo operations, recursive calls).
- **Matching/Nesting** — Ideal for bracket matching, expression evaluation.

### 🌍 Real-World Applications
| Application | How Stack is Used |
|---|---|
| Browser Back Button | Each page visited is pushed; Back pops it |
| Undo/Redo in editors | Ctrl+Z pops last operation |
| Function Call Stack | OS maintains stack of function calls |
| Expression Evaluation | Arithmetic expressions use stack |
| Syntax Parsing | Compilers validate brackets using stack |
| Recursion | Implicitly uses call stack |

---

## 1.2 Detailed Notes

### 📐 Properties of Stack
- **Linear** data structure
- **One end** (TOP) for both insertion and deletion
- **Static** (array-based) or **Dynamic** (linked list-based)
- Follows **LIFO** strictly

### 🔧 Core Operations

| Operation | Description | Time Complexity |
|---|---|---|
| `push(x)` | Insert element at top | O(1) |
| `pop()` | Remove element from top | O(1) |
| `peek()` / `top()` | View top element without removing | O(1) |
| `isEmpty()` | Check if stack is empty | O(1) |
| `isFull()` | Check if stack is full (array-based only) | O(1) |
| `size()` | Number of elements | O(1) |

### 📊 Complexity Table

| Implementation | Push | Pop | Peek | Space |
|---|---|---|---|---|
| Array-based | O(1) | O(1) | O(1) | O(n) |
| Linked List-based | O(1) | O(1) | O(1) | O(n) |

- **Best Case:** O(1) for all operations
- **Average Case:** O(1)
- **Worst Case:** O(1) — Stack is always O(1) for core operations

### ✅ Advantages
- Simple and easy to implement
- All operations in O(1)
- Memory efficient for LIFO use cases
- Both array and linked list implementations possible

### ❌ Disadvantages
- No random access to elements
- Fixed size in array implementation (Stack Overflow)
- Searching requires O(n) time

### ⚠️ Edge Cases (IMPORTANT for Exams!)
1. **Stack Overflow** — Pushing to a full stack (array-based)
2. **Stack Underflow** — Popping from an empty stack
3. **Single element stack** — peek after one push
4. **Checking isEmpty before every pop** — critical in code

### 🚫 Common Student Mistakes in Exams
- Forgetting to check `isEmpty()` before `pop()` → Underflow error
- Confusing LIFO with FIFO
- Not updating `top` pointer correctly (+1 on push, -1 on pop)
- Forgetting that `top` starts at **-1** (not 0) for empty stack
- Using `top` as count (it's an index, not count — count = top + 1)

---

## 1.3 Visual Understanding

### 📦 Stack Memory Visualization

```
PUSH sequence: 10, 20, 30

After PUSH(10):    After PUSH(20):    After PUSH(30):
  -------              -------              -------
  |     |   top=-1     |     |   top=0      | 30  |  ← top=2
  |     |              |     |              | 20  |
  |     |              |  10 |              | 10  |
  -------              -------              -------

After POP():       After POP():       After POP():
  -------              -------              -------
  |     |   top=1      |     |   top=0      |     |  ← top=-1 (EMPTY)
  |     |              |     |              |     |
  | 20  |  ← top       |  10 |  ← top       |     |
  | 10  |              |     |              |     |
  -------              -------              -------
  Returns 30           Returns 20           Returns 10
```

### 🔁 Dry Run — Bracket Matching: `{[()]}`

```
Character  |  Action           |  Stack State
-----------+-------------------+-------------
{          |  PUSH {           |  { 
[          |  PUSH [           |  { [
(          |  PUSH (           |  { [ (
)          |  POP  ( → match ) |  { [
]          |  POP  [ → match ] |  {
}          |  POP  { → match } |  EMPTY

Result: BALANCED ✅
```

### 🔁 Dry Run — `{[}]` (Invalid)

```
Character  |  Action           |  Stack State
-----------+-------------------+-------------
{          |  PUSH {           |  {
[          |  PUSH [           |  { [
}          |  POP [ → MISMATCH! |  ❌ INVALID
```

---

## 1.4 Code Implementation

### C++ — Array-Based Stack

```cpp
#include <iostream>
using namespace std;

// ============================================================
// STACK IMPLEMENTATION USING ARRAY (C++)
// ============================================================

const int MAX = 1000;

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;  // -1 means empty
    }

    // PUSH: Add element to top — O(1)
    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!\n";
            return false;
        }
        arr[++top] = x;  // Pre-increment then assign
        return true;
    }

    // POP: Remove top element — O(1)
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow!\n";
            return -1;
        }
        return arr[top--];  // Return then post-decrement
    }

    // PEEK: View top without removing — O(1)
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty!\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() { return top < 0; }
    int size()     { return top + 1; }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top: " << st.peek() << "\n";  // 30
    cout << "Pop: " << st.pop() << "\n";   // 30
    cout << "Pop: " << st.pop() << "\n";   // 20
    return 0;
}
```

### C++ — STL Stack (Interview-Preferred)

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);       // push
    st.push(20);
    st.push(30);

    cout << st.top();  // 30 — peek
    st.pop();          // removes 30

    cout << st.size(); // 2
    cout << st.empty();// false (0)
    return 0;
}
```

### Java — Stack Implementation

```java
// ============================================================
// STACK IMPLEMENTATION IN JAVA
// ============================================================
import java.util.Stack;
import java.util.EmptyStackException;

public class StackDemo {

    // Custom Array-Based Stack
    static class MyStack {
        private int[] arr;
        private int top;
        private int capacity;

        MyStack(int size) {
            arr = new int[size];
            capacity = size;
            top = -1;
        }

        // Push — O(1)
        public boolean push(int x) {
            if (top == capacity - 1) {
                System.out.println("Stack Overflow!");
                return false;
            }
            arr[++top] = x;
            return true;
        }

        // Pop — O(1)
        public int pop() {
            if (top == -1)
                throw new EmptyStackException();
            return arr[top--];
        }

        // Peek — O(1)
        public int peek() {
            if (top == -1)
                throw new EmptyStackException();
            return arr[top];
        }

        public boolean isEmpty() { return top == -1; }
        public int size()        { return top + 1; }
    }

    public static void main(String[] args) {
        // Using Java's built-in Stack
        Stack<Integer> stack = new Stack<>();
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println(stack.peek());  // 30
        System.out.println(stack.pop());   // 30
        System.out.println(stack.size());  // 2
        System.out.println(stack.isEmpty()); // false
    }
}
```

### Python — Stack Implementation

```python
# ============================================================
# STACK IMPLEMENTATION IN PYTHON
# ============================================================

# Python list as Stack (most common approach)
class Stack:
    def __init__(self):
        self.stack = []  # internal list

    # Push — O(1) amortized
    def push(self, x):
        self.stack.append(x)

    # Pop — O(1) amortized
    def pop(self):
        if self.is_empty():
            raise IndexError("Stack Underflow!")
        return self.stack.pop()

    # Peek — O(1)
    def peek(self):
        if self.is_empty():
            raise IndexError("Stack is Empty!")
        return self.stack[-1]

    def is_empty(self):
        return len(self.stack) == 0

    def size(self):
        return len(self.stack)


# Usage
st = Stack()
st.push(10)
st.push(20)
st.push(30)
print(st.peek())   # 30
print(st.pop())    # 30
print(st.size())   # 2

# ──────────────────────────────────────
# Using collections.deque (thread-safe, faster)
from collections import deque
stack = deque()
stack.append(10)     # push
stack.append(20)
print(stack[-1])     # peek → 20
stack.pop()          # pop
```

---

## 1.5 Important Questions

### 📗 Basic Questions
1. What is a stack? Define LIFO with an example.
2. What are the primary operations of a stack?
3. What is stack overflow and stack underflow?
4. What is the time complexity of push and pop?

### 📘 Medium-Level Questions
5. Implement a stack using a linked list.
6. How do you reverse a string using a stack?
7. Explain how function calls use a stack internally.
8. Implement two stacks in a single array.

### 📕 Exam-Level Theory Questions
9. Differentiate between array-based and linked-list-based stack implementations.
10. What is the significance of the `top` variable? What value does it hold for an empty stack?
11. How does a compiler use a stack during expression evaluation?
12. Can a stack be implemented using a queue? How? (and vice versa)

### 💻 Coding Questions
13. Check balanced brackets: `()[]{}` → valid, `([)]` → invalid
14. Evaluate postfix expression: `2 3 + 4 *`
15. Find next greater element for each array element.
16. Implement `getMin()` in O(1) using an auxiliary stack.
17. Sort a stack using recursion.

### 📜 Previous-Year Style Questions
18. *"Write an algorithm to evaluate an arithmetic expression given in postfix notation using a stack. Trace for: `5 1 2 + 4 * + 3 -`"*
19. *"What happens when push() is called on a full stack? How is this handled?"*
20. *"Implement a stack such that getMin() returns minimum in O(1) time."*

---

## 1.6 Solutions

### Q13 — Balanced Brackets

```python
def isBalanced(s):
    stack = []
    mapping = {')': '(', ']': '[', '}': '{'}  # closing → opening

    for char in s:
        if char in '([{':       # opening bracket
            stack.append(char)
        elif char in ')]}':     # closing bracket
            # Stack must not be empty AND top must match
            if not stack or stack[-1] != mapping[char]:
                return False
            stack.pop()

    return len(stack) == 0      # True only if all matched
```

### Q15 — Next Greater Element

```python
# For each element, find the next element to its RIGHT that is greater
def nextGreater(arr):
    n = len(arr)
    result = [-1] * n  # default: -1 if no greater element
    stack = []         # stores indices

    for i in range(n):
        # Pop elements smaller than current
        while stack and arr[stack[-1]] < arr[i]:
            idx = stack.pop()
            result[idx] = arr[i]  # current element is next greater
        stack.append(i)

    return result

# Example: [4, 5, 2, 25]
# Output:  [5, 25, 25, -1]
```

### Q16 — Min Stack O(1)

```python
class MinStack:
    def __init__(self):
        self.stack = []
        self.min_stack = []  # auxiliary stack storing minimums

    def push(self, x):
        self.stack.append(x)
        if not self.min_stack or x <= self.min_stack[-1]:
            self.min_stack.append(x)

    def pop(self):
        val = self.stack.pop()
        if val == self.min_stack[-1]:
            self.min_stack.pop()

    def getMin(self):
        return self.min_stack[-1]  # O(1)!
```

---

## 1.7 Revision Notes

### ⚡ Quick Revision Points
- Stack = LIFO (Last In, First Out)
- Top starts at **-1** for empty stack
- Push → `arr[++top] = x` | Pop → `return arr[top--]`
- All core operations: **O(1)**
- Space complexity: **O(n)**
- Overflow: push on full | Underflow: pop on empty

### 📐 Important Formulas/Facts
```
Empty Stack    → top == -1
Full Stack     → top == MAX - 1
Size of stack  → top + 1
Top element    → arr[top]
```

### 🎯 Important Tricks
- **Min Stack trick:** Use auxiliary stack to store minimums
- **Two-stack trick:** Middle point = MAX/2; one stack from each end
- **Reverse using stack:** Push all → pop all = reversed
- Balanced brackets: Every closing must match the most recent unclosed opening

### 🔥 Common Exam Questions on Stack
1. Bracket balancing
2. Evaluate postfix expression
3. Infix → Postfix conversion (covered in Topic 5)
4. Next Greater Element
5. Reverse string/array
6. Implement stack using queue

---

## 1.8 Cheatsheet — STACK

```
╔══════════════════════════════════════════════════════════╗
║                     STACK CHEATSHEET                    ║
╠══════════════════════════════════════════════════════════╣
║  Principle : LIFO (Last In, First Out)                  ║
║  Access    : Only TOP element directly                  ║
║  top init  : -1 (empty), MAX-1 (full)                  ║
╠══════════════════════════════════════════════════════════╣
║  OPERATIONS          TIME        SPACE                  ║
║  push(x)            O(1)         O(1)                  ║
║  pop()              O(1)         O(1)                  ║
║  peek()/top()       O(1)         O(1)                  ║
║  isEmpty()          O(1)         O(1)                  ║
║  Overall Space:     O(n)                               ║
╠══════════════════════════════════════════════════════════╣
║  APPLICATIONS                                           ║
║  • Bracket matching   • Undo/Redo                      ║
║  • Postfix eval       • Function calls                 ║
║  • DFS traversal      • Browser history               ║
╠══════════════════════════════════════════════════════════╣
║  PITFALLS                                               ║
║  ❌ Pop empty → Underflow                               ║
║  ❌ Push full → Overflow                                ║
║  ❌ Confusing top index with size                       ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# 2. QUEUE

---

## 2.1 Concept Explanation

### 📌 Definition
A **Queue** is a linear data structure that follows the **FIFO** (First In, First Out) principle.
- The first element inserted is the first one to be removed.
- Think of a queue at a ticket counter — the first person to join is the first served.

### 🧠 Intuition
Imagine a line at a bank:
- People join at the **REAR** end.
- People leave from the **FRONT** end.
- No cutting in line — strictly orderly.

### ❓ Why is it Used?
- **Fair ordering** — Processes elements in order of arrival.
- **Buffering** — Between producer and consumer systems.
- **BFS traversal** — Level-order processing of graphs/trees.
- **Scheduling** — CPU and disk scheduling algorithms.

### 🌍 Real-World Applications
| Application | How Queue is Used |
|---|---|
| CPU Scheduling | Round-robin process queue |
| Print Spooler | Print jobs queued in order |
| BFS in Graphs | Queue for level-by-level traversal |
| Network Routers | Packet queuing |
| WhatsApp Messages | Messages delivered in order |
| Ticket Booking | First-come first-served |

---

## 2.2 Detailed Notes

### 📐 Properties of Queue
- **Linear** data structure
- **Two ends** — FRONT (deletion) and REAR (insertion)
- **Static** (circular array) or **Dynamic** (linked list)
- Strictly follows **FIFO**

### 🔧 Core Operations

| Operation | Description | Time Complexity |
|---|---|---|
| `enqueue(x)` | Insert at REAR | O(1) |
| `dequeue()` | Remove from FRONT | O(1) |
| `front()` / `peek()` | View FRONT element | O(1) |
| `isEmpty()` | Check if empty | O(1) |
| `isFull()` | Check if full | O(1) |
| `size()` | Number of elements | O(1) |

### Types of Queue

| Type | Description | Key Feature |
|---|---|---|
| **Simple Queue** | Basic FIFO | Front and Rear pointers |
| **Circular Queue** | Front connects to rear | No wasted space |
| **Double-Ended Queue (Deque)** | Insert/delete both ends | Max flexibility |
| **Priority Queue** | Highest priority served first | Uses heap internally |

### 📊 Complexity Table

| Implementation | Enqueue | Dequeue | Space |
|---|---|---|---|
| Array (Simple) | O(1) | O(n) — shift needed | O(n) |
| Circular Array | O(1) | O(1) | O(n) |
| Linked List | O(1) | O(1) | O(n) |

> ⚠️ **Exam Trap:** Simple array queue has O(n) dequeue due to shifting unless circular!

### ✅ Advantages
- Fair, ordered processing (FIFO)
- O(1) enqueue and dequeue (circular/linked list)
- Ideal for scheduling and BFS

### ❌ Disadvantages
- Simple array loses space after dequeue (solved by circular queue)
- No random access
- Fixed size in array implementation

### ⚠️ Edge Cases
1. **Empty Queue Dequeue** — Underflow
2. **Full Queue Enqueue** — Overflow
3. **Single Element** — Front == Rear
4. **Circular Queue Full Condition** — `(rear + 1) % MAX == front`

### 🚫 Common Student Mistakes
- Confusing `front` and `rear` updates
- Forgetting circular wrapping: `rear = (rear + 1) % MAX`
- Not handling the empty queue check before peek/dequeue
- Confusing size: in circular queue, size = `(rear - front + MAX) % MAX`

---

## 2.3 Visual Understanding

### 📦 Queue Memory Visualization

```
ENQUEUE: 10, 20, 30

Initial:  front = rear = -1  (EMPTY)

After ENQUEUE(10):       After ENQUEUE(20):       After ENQUEUE(30):
[10][ ][ ][ ]            [10][20][ ][ ]           [10][20][30][ ]
 ↑                          ↑                          ↑
front=rear=0               front=0  rear=1            front=0  rear=2

After DEQUEUE():         After DEQUEUE():
[ ][20][30][ ]           [ ][ ][30][ ]
    ↑                           ↑
   front=1  rear=2             front=2  rear=2
   Returns: 10                  Returns: 20
```

### 🔁 Circular Queue Dry Run (MAX = 4)

```
ENQUEUE 10, 20, 30, 40

[10][20][30][40]
  ↑              ↑
front=0         rear=3

DEQUEUE → returns 10:
[ ][20][30][40]
    ↑          ↑
  front=1    rear=3

ENQUEUE 50:  rear = (3+1) % 4 = 0
[50][20][30][40]
  ↑   ↑
rear=0  front=1   ← Circular wrapping!

FULL check: (rear+1) % MAX == front → (0+1)%4 = 1 = front → FULL ✅
```

---

## 2.4 Code Implementation

### C++ — Circular Queue

```cpp
#include <iostream>
using namespace std;

// ============================================================
// CIRCULAR QUEUE USING ARRAY (C++)
// ============================================================
const int MAX = 5;

class CircularQueue {
    int arr[MAX];
    int front, rear, count;

public:
    CircularQueue() : front(0), rear(-1), count(0) {}

    // ENQUEUE — O(1)
    bool enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full (Overflow)!\n";
            return false;
        }
        rear = (rear + 1) % MAX;    // circular increment
        arr[rear] = x;
        count++;
        return true;
    }

    // DEQUEUE — O(1)
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty (Underflow)!\n";
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % MAX;  // circular increment
        count--;
        return val;
    }

    int peek()    { return isEmpty() ? -1 : arr[front]; }
    bool isEmpty(){ return count == 0; }
    bool isFull() { return count == MAX; }
    int size()    { return count; }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.dequeue() << "\n";  // 10
    cout << q.peek() << "\n";     // 20
    return 0;
}
```

### C++ — STL Queue

```cpp
#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main() {
    // Simple Queue
    queue<int> q;
    q.push(10);   // enqueue
    q.push(20);
    q.push(30);
    cout << q.front(); // 10
    cout << q.back();  // 30
    q.pop();           // dequeue → removes 10

    // Priority Queue (Max by default)
    priority_queue<int> pq;
    pq.push(5); pq.push(1); pq.push(3);
    cout << pq.top();  // 5 (maximum)

    // Deque (Double-ended queue)
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.pop_back();
    dq.pop_front();

    return 0;
}
```

### Java — Queue Implementation

```java
// ============================================================
// QUEUE IMPLEMENTATION IN JAVA
// ============================================================
import java.util.*;

public class QueueDemo {

    // Custom Circular Queue
    static class CircularQueue {
        int[] arr;
        int front, rear, count, MAX;

        CircularQueue(int size) {
            MAX = size;
            arr = new int[MAX];
            front = 0;
            rear = -1;
            count = 0;
        }

        public boolean enqueue(int x) {
            if (count == MAX) {
                System.out.println("Queue Full!");
                return false;
            }
            rear = (rear + 1) % MAX;
            arr[rear] = x;
            count++;
            return true;
        }

        public int dequeue() {
            if (count == 0) throw new NoSuchElementException("Empty Queue");
            int val = arr[front];
            front = (front + 1) % MAX;
            count--;
            return val;
        }

        public int peek()    { return arr[front]; }
        public boolean isEmpty() { return count == 0; }
        public int size()    { return count; }
    }

    public static void main(String[] args) {
        // Java's built-in Queue (via LinkedList)
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(10);   // enqueue (returns false if full)
        queue.offer(20);
        queue.offer(30);
        System.out.println(queue.peek());  // 10 — front
        System.out.println(queue.poll());  // 10 — dequeue

        // ArrayDeque (fastest Queue in Java)
        Deque<Integer> deque = new ArrayDeque<>();
        deque.offerFirst(5);
        deque.offerLast(15);
        System.out.println(deque.pollFirst()); // 5
    }
}
```

### Python — Queue Implementation

```python
# ============================================================
# QUEUE IMPLEMENTATION IN PYTHON
# ============================================================
from collections import deque

# ── Method 1: Using deque (recommended) ──
queue = deque()
queue.append(10)       # enqueue → O(1)
queue.append(20)
queue.append(30)
print(queue[0])        # peek front → 10
queue.popleft()        # dequeue → O(1)
print(queue)           # deque([20, 30])

# ── Method 2: Queue module (thread-safe) ──
from queue import Queue, LifoQueue, PriorityQueue

q = Queue()
q.put(10)              # enqueue
q.put(20)
print(q.get())         # dequeue → 10
print(q.qsize())       # size

# ── Method 3: Custom Circular Queue ──
class CircularQueue:
    def __init__(self, size):
        self.MAX = size
        self.arr = [None] * self.MAX
        self.front = 0
        self.rear = -1
        self.count = 0

    def enqueue(self, x):
        if self.is_full():
            raise OverflowError("Queue is Full!")
        self.rear = (self.rear + 1) % self.MAX
        self.arr[self.rear] = x
        self.count += 1

    def dequeue(self):
        if self.is_empty():
            raise IndexError("Queue is Empty!")
        val = self.arr[self.front]
        self.front = (self.front + 1) % self.MAX
        self.count -= 1
        return val

    def peek(self):
        return self.arr[self.front]

    def is_empty(self):
        return self.count == 0

    def is_full(self):
        return self.count == self.MAX
```

---

## 2.5 Important Questions

### 📗 Basic
1. What is a queue? What principle does it follow?
2. Differentiate between enqueue and dequeue.
3. What is the difference between simple queue and circular queue?

### 📘 Medium
4. Implement a queue using two stacks.
5. Implement a stack using two queues.
6. What is a priority queue? How is it different from a regular queue?
7. Implement a circular queue and explain the full condition.

### 📕 Exam Theory
8. Why is a circular queue better than a simple queue?
9. What is a deque? How is it different from a queue?
10. What is the full condition for circular queue using array?

### 💻 Coding
11. BFS using a queue on a graph.
12. Generate binary numbers from 1 to N using queue.
13. Implement a queue using a single stack.

---

## 2.6 Solutions

### Q4 — Queue Using Two Stacks

```python
# Push to stack1; for dequeue, move all to stack2
class QueueUsingStacks:
    def __init__(self):
        self.s1 = []  # for enqueue
        self.s2 = []  # for dequeue

    def enqueue(self, x):
        self.s1.append(x)  # O(1)

    def dequeue(self):
        if not self.s2:
            while self.s1:
                self.s2.append(self.s1.pop())  # transfer all
        if not self.s2:
            raise IndexError("Empty Queue")
        return self.s2.pop()  # O(1) amortized
```

### Q12 — Binary Numbers 1 to N

```python
from collections import deque

def generate_binary(n):
    result = []
    q = deque()
    q.append("1")

    for _ in range(n):
        front = q.popleft()
        result.append(front)
        q.append(front + "0")  # append 0
        q.append(front + "1")  # append 1

    return result

# generate_binary(5) → ['1','10','11','100','101']
```

---

## 2.7 Revision Notes

### ⚡ Quick Revision Points
- Queue = FIFO (First In, First Out)
- Enqueue at REAR, Dequeue from FRONT
- Circular Queue full: `(rear + 1) % MAX == front`
- All operations: **O(1)** for circular/linked list implementation
- Priority Queue uses **Heap** internally

### 📐 Key Formulas — Circular Queue
```
rear   = (rear + 1) % MAX      → on enqueue
front  = (front + 1) % MAX     → on dequeue
isFull = (rear + 1) % MAX == front
isEmpty= front == -1  OR  count == 0
size   = (rear - front + MAX) % MAX + 1
```

### 🔥 Common Exam Questions
1. Circular queue full/empty conditions
2. Queue using two stacks
3. BFS implementation
4. Difference between queue types

---

## 2.8 Cheatsheet — QUEUE

```
╔══════════════════════════════════════════════════════════╗
║                     QUEUE CHEATSHEET                    ║
╠══════════════════════════════════════════════════════════╣
║  Principle : FIFO (First In, First Out)                 ║
║  Insert    : REAR end (enqueue)                        ║
║  Delete    : FRONT end (dequeue)                       ║
╠══════════════════════════════════════════════════════════╣
║  TYPES                                                  ║
║  • Simple Queue     — Basic FIFO, wastes space         ║
║  • Circular Queue   — Wraps rear to front              ║
║  • Deque            — Both ends insert/delete          ║
║  • Priority Queue   — Min/Max heap based               ║
╠══════════════════════════════════════════════════════════╣
║  OPERATIONS     TIME                                    ║
║  enqueue        O(1)  [circular/LL]                    ║
║  dequeue        O(1)  [circular/LL]                    ║
║  peek/front     O(1)                                   ║
╠══════════════════════════════════════════════════════════╣
║  CIRCULAR QUEUE KEY FORMULAS                            ║
║  rear   = (rear+1) % MAX  on enqueue                   ║
║  front  = (front+1) % MAX on dequeue                   ║
║  full   = (rear+1) % MAX == front                      ║
╠══════════════════════════════════════════════════════════╣
║  APPLICATIONS                                           ║
║  • BFS traversal    • CPU scheduling                   ║
║  • Print spooler    • Network buffers                  ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# 3. LINKED LIST — Insert & Delete

---

## 3.1 Concept Explanation

### 📌 Definition
A **Linked List** is a linear data structure where elements (called **nodes**) are stored at non-contiguous memory locations. Each node contains:
- **Data** — the value stored
- **Next** — a pointer/reference to the next node

### 🧠 Intuition
Think of a **treasure hunt**:
- Each clue (node) tells you where the next clue is.
- You must start from the **Head** (first clue) and follow links.
- There's no jumping to clue #5 directly — you must traverse from #1.

### ❓ Why is it Used?
- **Dynamic size** — Grows/shrinks at runtime (no fixed size).
- **Efficient insertion/deletion** — No shifting of elements (unlike arrays).
- **Base for other structures** — Stacks, Queues, Hash Tables, Graphs.

### 🌍 Real-World Applications
| Application | How Linked List is Used |
|---|---|
| Browser History | Doubly linked list — Back/Forward |
| Music Playlist | Circular linked list — Previous/Next |
| OS Memory Management | Free block list |
| Polynomial Representation | Each node = one term |
| Hash Table Chaining | Each bucket is a linked list |

---

## 3.2 Detailed Notes

### 📐 Types of Linked Lists

| Type | Structure | Direction |
|---|---|---|
| **Singly** | Each node → next | Forward only |
| **Doubly** | Each node ⇄ next, prev | Both directions |
| **Circular** | Last node → Head | Circular |
| **Doubly Circular** | Both directions + circular | Full flexibility |

### 🔧 Core Operations & Complexity

| Operation | Singly LL | Doubly LL |
|---|---|---|
| Insert at Head | O(1) | O(1) |
| Insert at Tail | O(n) without tail ptr; O(1) with | O(1) with tail ptr |
| Insert at Position k | O(k) | O(k) |
| Delete at Head | O(1) | O(1) |
| Delete at Tail | O(n) | O(1) with tail ptr |
| Delete at Position k | O(k) | O(k) |
| Search | O(n) | O(n) |
| Access by index | O(n) | O(n) |

### 📊 Linked List vs Array

| Feature | Array | Linked List |
|---|---|---|
| Memory | Contiguous | Non-contiguous |
| Size | Fixed | Dynamic |
| Access | O(1) random | O(n) sequential |
| Insert/Delete (middle) | O(n) — shifts required | O(1) after traversal |
| Memory waste | May waste (fixed size) | Extra for pointers |
| Cache performance | Better (locality) | Worse |

### ✅ Advantages
- Dynamic size — grows/shrinks as needed
- Efficient insertion and deletion (O(1) if position known)
- No memory wastage due to predeclared size

### ❌ Disadvantages
- No random access — must traverse from head
- Extra memory for pointer storage
- Poor cache performance (non-contiguous)
- Reverse traversal not possible (singly LL)

### ⚠️ Edge Cases
1. **Empty list** — head is NULL/None
2. **Single node** — head == tail; deleting it makes list empty
3. **Insert at head** — must update head pointer
4. **Delete head** — head = head.next
5. **Delete tail** — traverse to second-last node
6. **Circular list** — last node's next = head (never NULL)

### 🚫 Common Student Mistakes
- Not handling NULL pointer before accessing next
- Losing reference to head during operations
- Not updating prev pointer in doubly linked list
- Off-by-one errors during position-based operations
- Memory leak: not freeing deleted nodes (C/C++)

---

## 3.3 Visual Understanding

### 📦 Singly Linked List Structure

```
HEAD
 │
 ▼
┌────┬────┐   ┌────┬────┐   ┌────┬────┐
│ 10 │ ●──┼──►│ 20 │ ●──┼──►│ 30 │NULL│
└────┴────┘   └────┴────┘   └────┴────┘
  Node 1         Node 2         Node 3
 (Head)                        (Tail)
```

### 🔁 Insert at Position — Dry Run

**List:** 10 → 20 → 30 → NULL
**Insert 15 at position 2 (after node with data 10):**

```
Step 1: Create new node (15)
        [15 | next = NULL]

Step 2: Traverse to position 1 (node with 10)
        curr → points to Node(10)

Step 3: newNode.next = curr.next   → [15 → 20]
Step 4: curr.next = newNode        → [10 → 15]

Result: 10 → 15 → 20 → 30 → NULL ✅
```

### 🔁 Delete a Node — Dry Run

**List:** 10 → 20 → 30 → NULL
**Delete node with value 20:**

```
Step 1: prev = NULL, curr = Head(10)
Step 2: curr.data != 20 → move: prev=curr(10), curr=curr.next(20)
Step 3: curr.data == 20 → FOUND
Step 4: prev.next = curr.next   → 10.next = 30
Step 5: free(curr)              → Node(20) deleted

Result: 10 → 30 → NULL ✅
```

---

## 3.4 Code Implementation

### C++ — Singly Linked List (Full: Insert + Delete)

```cpp
#include <iostream>
using namespace std;

// ============================================================
// SINGLY LINKED LIST — C++
// ============================================================

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // ── INSERT OPERATIONS ──

    // Insert at HEAD — O(1)
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;   // new node points to old head
        head = newNode;         // head is updated to new node
    }

    // Insert at TAIL — O(n)
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {            // empty list
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next)      // traverse to last node
            curr = curr->next;
        curr->next = newNode;   // last node points to new node
    }

    // Insert at POSITION k (1-indexed) — O(k)
    void insertAtPosition(int val, int pos) {
        if (pos == 1) {
            insertAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 1; i < pos - 1 && curr; i++)
            curr = curr->next;
        if (!curr) {
            cout << "Position out of bounds!\n";
            return;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }

    // ── DELETE OPERATIONS ──

    // Delete HEAD — O(1)
    void deleteHead() {
        if (!head) { cout << "Empty list!\n"; return; }
        Node* temp = head;
        head = head->next;  // move head to next
        delete temp;        // free memory
    }

    // Delete by VALUE — O(n)
    void deleteByValue(int val) {
        if (!head) return;

        // Special case: head contains the value
        if (head->data == val) {
            deleteHead();
            return;
        }

        Node* prev = head;
        Node* curr = head->next;
        while (curr && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }
        if (!curr) { cout << "Value not found!\n"; return; }
        prev->next = curr->next;  // bypass curr
        delete curr;
    }

    // Delete at POSITION k (1-indexed) — O(k)
    void deleteAtPosition(int pos) {
        if (!head) return;
        if (pos == 1) { deleteHead(); return; }

        Node* curr = head;
        for (int i = 1; i < pos - 1 && curr; i++)
            curr = curr->next;
        if (!curr || !curr->next) {
            cout << "Position out of bounds!\n";
            return;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }

    // ── UTILITY ──

    void print() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " → ";
            curr = curr->next;
        }
        cout << "NULL\n";
    }

    int length() {
        int count = 0;
        Node* curr = head;
        while (curr) { count++; curr = curr->next; }
        return count;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtHead(5);
    ll.print();              // 5 → 10 → 20 → 30 → NULL
    ll.insertAtPosition(15, 3);
    ll.print();              // 5 → 10 → 15 → 20 → 30 → NULL
    ll.deleteByValue(15);
    ll.print();              // 5 → 10 → 20 → 30 → NULL
    ll.deleteHead();
    ll.print();              // 10 → 20 → 30 → NULL
    return 0;
}
```

### Java — Linked List

```java
// ============================================================
// SINGLY LINKED LIST — JAVA
// ============================================================
public class LinkedList {

    static class Node {
        int data;
        Node next;
        Node(int val) { data = val; next = null; }
    }

    Node head;

    // Insert at Head — O(1)
    public void insertAtHead(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }

    // Insert at Tail — O(n)
    public void insertAtTail(int val) {
        Node newNode = new Node(val);
        if (head == null) { head = newNode; return; }
        Node curr = head;
        while (curr.next != null) curr = curr.next;
        curr.next = newNode;
    }

    // Delete by Value — O(n)
    public void deleteByValue(int val) {
        if (head == null) return;
        if (head.data == val) { head = head.next; return; }
        Node prev = head, curr = head.next;
        while (curr != null && curr.data != val) {
            prev = curr; curr = curr.next;
        }
        if (curr != null) prev.next = curr.next;
    }

    // Reverse — O(n) [IMPORTANT EXAM QUESTION]
    public void reverse() {
        Node prev = null, curr = head, next = null;
        while (curr != null) {
            next = curr.next;   // save next
            curr.next = prev;   // reverse link
            prev = curr;        // move prev forward
            curr = next;        // move curr forward
        }
        head = prev;            // prev is new head
    }

    public void print() {
        Node curr = head;
        while (curr != null) {
            System.out.print(curr.data + " → ");
            curr = curr.next;
        }
        System.out.println("NULL");
    }
}
```

### Python — Linked List

```python
# ============================================================
# SINGLY LINKED LIST — PYTHON
# ============================================================

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    # Insert at Head — O(1)
    def insert_at_head(self, val):
        new_node = Node(val)
        new_node.next = self.head
        self.head = new_node

    # Insert at Tail — O(n)
    def insert_at_tail(self, val):
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node

    # Delete by Value — O(n)
    def delete_by_value(self, val):
        if not self.head:
            return
        if self.head.data == val:
            self.head = self.head.next
            return
        prev, curr = self.head, self.head.next
        while curr and curr.data != val:
            prev, curr = curr, curr.next
        if curr:
            prev.next = curr.next

    # Reverse — O(n)
    def reverse(self):
        prev, curr = None, self.head
        while curr:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
        self.head = prev

    # Detect Cycle — Floyd's Algorithm
    def has_cycle(self):
        slow = fast = self.head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                return True  # cycle detected
        return False

    def print_list(self):
        curr = self.head
        while curr:
            print(curr.data, end=" → ")
            curr = curr.next
        print("NULL")


# Usage
ll = LinkedList()
ll.insert_at_tail(10)
ll.insert_at_tail(20)
ll.insert_at_tail(30)
ll.insert_at_head(5)
ll.print_list()       # 5 → 10 → 20 → 30 → NULL
ll.reverse()
ll.print_list()       # 30 → 20 → 10 → 5 → NULL
```

---

## 3.5 Important Questions

### 📗 Basic
1. What is a node in a linked list?
2. What is the difference between singly and doubly linked list?
3. How is a linked list different from an array?

### 📘 Medium
4. Reverse a linked list (iterative + recursive).
5. Find the middle of a linked list.
6. Detect a cycle in a linked list (Floyd's Algorithm).
7. Merge two sorted linked lists.

### 📕 Exam Theory
8. Compare linked list vs array for insert/delete operations.
9. When would you use a doubly linked list over singly?
10. What is a memory leak in linked list (C/C++)? How to avoid?

### 💻 Coding
11. Find the Nth node from the end of a linked list.
12. Remove duplicates from a sorted linked list.
13. Find the intersection point of two linked lists.
14. Check if a linked list is a palindrome.

---

## 3.6 Solutions

### Q4 — Reverse Linked List (Iterative)

```python
def reverse(self):
    prev, curr = None, self.head
    while curr:
        nxt = curr.next   # save next before breaking link
        curr.next = prev  # reverse the link
        prev = curr       # advance prev
        curr = nxt        # advance curr
    self.head = prev      # new head is the old tail
```

### Q5 — Find Middle (Slow/Fast Pointer)

```python
def find_middle(self):
    slow = fast = self.head
    while fast and fast.next:
        slow = slow.next       # 1 step
        fast = fast.next.next  # 2 steps
    return slow.data           # when fast reaches end, slow is at middle
```

### Q11 — Nth Node From End

```python
def nth_from_end(self, n):
    first = second = self.head
    # Move first n steps ahead
    for _ in range(n):
        if not first: return None
        first = first.next
    # Now move both until first reaches end
    while first:
        first = first.next
        second = second.next
    return second.data
```

---

## 3.7 Revision Notes

### ⚡ Quick Revision Points
- Head = starting pointer; NULL = end
- Insert at head: **O(1)** | At tail: **O(n)** (without tail pointer)
- Delete: **O(n)** for search + **O(1)** for actual deletion
- No random access — must traverse from head
- Floyd's Cycle Detection: slow (1 step) + fast (2 steps)

### 🔥 Common Exam Questions
1. Reverse a linked list
2. Detect cycle (Floyd's algorithm)
3. Find middle node
4. Merge two sorted lists
5. Remove Nth node from end

---

## 3.8 Cheatsheet — LINKED LIST

```
╔══════════════════════════════════════════════════════════╗
║                  LINKED LIST CHEATSHEET                 ║
╠══════════════════════════════════════════════════════════╣
║  NODE = [DATA | NEXT]                                   ║
║  HEAD → [10|●] → [20|●] → [30|NULL]                    ║
╠══════════════════════════════════════════════════════════╣
║  OPERATION           TIME      NOTES                    ║
║  Insert at Head      O(1)      update head              ║
║  Insert at Tail      O(n)      traverse to last         ║
║  Insert at Pos k     O(k)      traverse k-1 nodes       ║
║  Delete Head         O(1)      head = head.next         ║
║  Delete by Value     O(n)      find then bypass         ║
║  Search              O(n)      linear scan              ║
╠══════════════════════════════════════════════════════════╣
║  KEY ALGORITHMS                                         ║
║  Reverse         → 3 pointers: prev, curr, next         ║
║  Find Middle     → Slow/Fast pointer (tortoise-hare)    ║
║  Detect Cycle    → Floyd's: slow=1x, fast=2x            ║
║  Nth from end    → Two pointer gap of N                 ║
╠══════════════════════════════════════════════════════════╣
║  TYPES                                                  ║
║  Singly   → forward only    • Simple, less memory      ║
║  Doubly   → both directions • Easy reverse, more mem   ║
║  Circular → last→head       • Continuous cycling       ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# 4. TREES

---

## 4.1 Concept Explanation

### 📌 Definition
A **Tree** is a non-linear hierarchical data structure consisting of **nodes** connected by **edges**, with one designated **root** node and no cycles.

### 🧠 Intuition
Think of a real tree (upside down):
- The **root** is at the top.
- **Branches** go downward (edges).
- **Leaves** are at the bottom (nodes with no children).
- There is **exactly one path** from root to any node.

### ❓ Why is it Used?
- Represents **hierarchical** data naturally.
- **Searching** is faster than linked lists (O(log n) in BST).
- Forms the foundation for databases (B-Trees), file systems, and AI (Decision Trees).

### 🌍 Real-World Applications
| Application | Tree Type |
|---|---|
| File system (folders) | General Tree |
| Database indexing | B-Tree, B+ Tree |
| HTML/XML DOM | General Tree |
| Huffman Compression | Binary Tree |
| Priority Queue | Heap (complete binary tree) |
| Decision Making (AI) | Decision Tree |
| Network Routing | Spanning Tree |

---

## 4.2 Detailed Notes

### 📐 Key Terminology

| Term | Definition |
|---|---|
| **Root** | Top-most node (no parent) |
| **Parent** | Node with one or more children |
| **Child** | Nodes directly below a parent |
| **Leaf** | Node with no children |
| **Siblings** | Nodes with the same parent |
| **Height** | Longest path from node to leaf |
| **Depth** | Path length from root to node |
| **Level** | Depth + 1 (root at level 1) |
| **Degree** | Number of children of a node |
| **Edge** | Connection between parent and child |
| **Subtree** | Any node and all its descendants |

### 📐 Types of Trees

| Type | Description |
|---|---|
| **Binary Tree** | Each node has at most 2 children |
| **Binary Search Tree** | Left < Root < Right |
| **Complete Binary Tree** | All levels full except possibly last (filled left to right) |
| **Full Binary Tree** | Every node has 0 or 2 children |
| **Perfect Binary Tree** | All leaves at same level |
| **Balanced Binary Tree** | Height difference of subtrees ≤ 1 |
| **AVL Tree** | Self-balancing BST |
| **Heap** | Complete binary tree with heap property |

### 📐 Binary Tree Properties

```
For a Binary Tree with height h:
• Min nodes = h + 1 (skewed tree)
• Max nodes = 2^(h+1) - 1 (perfect tree)
• Nodes at level L = 2^(L-1)
• Leaves in perfect tree = 2^h
• For n nodes: height = ⌊log₂(n)⌋ (for perfect tree)
```

### 🔧 Tree Traversals

| Traversal | Order | Use Case |
|---|---|---|
| **Inorder** (LNR) | Left → Root → Right | BST sorted order |
| **Preorder** (NLR) | Root → Left → Right | Copy tree, prefix expression |
| **Postorder** (LRN) | Left → Right → Root | Delete tree, postfix expression |
| **Level Order (BFS)** | Level by level | Shortest path, serialization |

### 📊 Time Complexities — BST

| Operation | Average | Worst (Skewed) |
|---|---|---|
| Search | O(log n) | O(n) |
| Insert | O(log n) | O(n) |
| Delete | O(log n) | O(n) |
| Traversal | O(n) | O(n) |

### ✅ Advantages
- Fast search in BST: O(log n) average
- Natural hierarchical representation
- Efficient for sorted data
- Base for many advanced structures

### ❌ Disadvantages
- Skewed BST degrades to O(n) — need balancing
- Not cache-friendly (pointer-based)
- Deletion is complex (especially in BST)

### ⚠️ Edge Cases
1. **Empty tree** — root is NULL
2. **Single node** — no children; root = leaf
3. **Skewed tree** — all nodes on one side (worst case BST)
4. **Deleting root** — update root pointer
5. **Node with two children** in BST — find inorder successor

---

## 4.3 Visual Understanding

### 📦 Binary Tree Structure

```
         1          ← Root (Level 1, Depth 0)
       /   \
      2     3       ← Level 2, Depth 1
     / \   / \
    4   5 6   7     ← Level 3, Depth 2 (Leaves)

Height = 2 (edges from root to lowest leaf)
Total Nodes = 7 = 2^3 - 1 (perfect binary tree)
```

### 🔁 Tree Traversals — Dry Run

```
         1
       /   \
      2     3
     / \
    4   5

Inorder   (L→N→R): 4 → 2 → 5 → 1 → 3
Preorder  (N→L→R): 1 → 2 → 4 → 5 → 3
Postorder (L→R→N): 4 → 5 → 2 → 3 → 1
Level Order       : 1 → 2 → 3 → 4 → 5
```

### 🔁 BST Insert — Dry Run

**Insert: 50, 30, 70, 20, 40 into empty BST**

```
Insert 50:          Insert 30:          Insert 70:
    50                  50                  50
                       /                  /   \
                      30                30     70

Insert 20:          Insert 40:
    50                  50
   /  \               /   \
  30   70            30    70
 /                  / \
20                 20  40
```

### 🔁 BST Search — Dry Run

**Search 40 in above tree:**

```
Start at 50 → 40 < 50 → go LEFT
At 30 → 40 > 30 → go RIGHT
At 40 → 40 == 40 → FOUND ✅
```

---

## 4.4 Code Implementation

### C++ — Binary Tree + BST

```cpp
#include <iostream>
#include <queue>
using namespace std;

// ============================================================
// BINARY TREE + BST IMPLEMENTATION — C++
// ============================================================

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// ── TRAVERSALS ──

// Inorder: Left → Root → Right
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Preorder: Root → Left → Right
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder: Left → Right → Root
void postorder(TreeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

// Level Order (BFS) using Queue
void levelOrder(TreeNode* root) {
    if (!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front(); q.pop();
        cout << node->val << " ";
        if (node->left)  q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

// ── HEIGHT ──
int height(TreeNode* root) {
    if (!root) return -1;  // -1 for edge-count height
    return 1 + max(height(root->left), height(root->right));
}

// ── BST OPERATIONS ──

// BST Insert — O(log n) average
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);  // base case: insert here
    if (val < root->val)
        root->left = insert(root->left, val);  // go left
    else if (val > root->val)
        root->right = insert(root->right, val); // go right
    // val == root->val → duplicate, ignore
    return root;
}

// BST Search — O(log n) average
TreeNode* search(TreeNode* root, int val) {
    if (!root || root->val == val) return root;
    if (val < root->val) return search(root->left, val);
    return search(root->right, val);
}

// BST Delete — O(log n) average
TreeNode* findMin(TreeNode* root) {
    while (root->left) root = root->left;
    return root;
}

TreeNode* deleteNode(TreeNode* root, int val) {
    if (!root) return root;
    if (val < root->val)
        root->left = deleteNode(root->left, val);
    else if (val > root->val)
        root->right = deleteNode(root->right, val);
    else {
        // Found the node to delete
        if (!root->left) {      // Case 1: no left child
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) { // Case 2: no right child
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: two children → replace with inorder successor
        TreeNode* successor = findMin(root->right);
        root->val = successor->val;
        root->right = deleteNode(root->right, successor->val);
    }
    return root;
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Inorder: ";   inorder(root);   cout << "\n"; // 20 30 40 50 70
    cout << "Preorder: ";  preorder(root);  cout << "\n"; // 50 30 20 40 70
    cout << "Postorder: "; postorder(root); cout << "\n"; // 20 40 30 70 50
    cout << "Level Order: "; levelOrder(root); cout << "\n";

    cout << "Height: " << height(root) << "\n"; // 2
    return 0;
}
```

### Java — Binary Tree

```java
// ============================================================
// BINARY TREE — JAVA
// ============================================================
import java.util.*;

public class BinaryTree {

    static class TreeNode {
        int val;
        TreeNode left, right;
        TreeNode(int x) { val = x; }
    }

    // Inorder Traversal
    static void inorder(TreeNode root) {
        if (root == null) return;
        inorder(root.left);
        System.out.print(root.val + " ");
        inorder(root.right);
    }

    // BST Insert
    static TreeNode insert(TreeNode root, int val) {
        if (root == null) return new TreeNode(val);
        if (val < root.val) root.left = insert(root.left, val);
        else if (val > root.val) root.right = insert(root.right, val);
        return root;
    }

    // Level Order (BFS)
    static void levelOrder(TreeNode root) {
        if (root == null) return;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while (!q.isEmpty()) {
            TreeNode node = q.poll();
            System.out.print(node.val + " ");
            if (node.left != null)  q.offer(node.left);
            if (node.right != null) q.offer(node.right);
        }
    }

    // Height
    static int height(TreeNode root) {
        if (root == null) return -1;
        return 1 + Math.max(height(root.left), height(root.right));
    }

    public static void main(String[] args) {
        TreeNode root = null;
        root = insert(root, 50);
        root = insert(root, 30);
        root = insert(root, 70);
        inorder(root);   // 30 50 70
    }
}
```

### Python — Binary Tree

```python
# ============================================================
# BINARY TREE — PYTHON
# ============================================================
from collections import deque

class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

# ── TRAVERSALS ──

def inorder(root):
    if not root: return []
    return inorder(root.left) + [root.val] + inorder(root.right)

def preorder(root):
    if not root: return []
    return [root.val] + preorder(root.left) + preorder(root.right)

def postorder(root):
    if not root: return []
    return postorder(root.left) + postorder(root.right) + [root.val]

def level_order(root):
    if not root: return []
    result, q = [], deque([root])
    while q:
        node = q.popleft()
        result.append(node.val)
        if node.left:  q.append(node.left)
        if node.right: q.append(node.right)
    return result

# ── BST OPERATIONS ──

def insert(root, val):
    if not root: return TreeNode(val)
    if val < root.val:
        root.left = insert(root.left, val)
    elif val > root.val:
        root.right = insert(root.right, val)
    return root

def search(root, val):
    if not root or root.val == val: return root
    if val < root.val: return search(root.left, val)
    return search(root.right, val)

def height(root):
    if not root: return -1
    return 1 + max(height(root.left), height(root.right))

# Usage
root = None
for val in [50, 30, 70, 20, 40]:
    root = insert(root, val)

print("Inorder:", inorder(root))      # [20, 30, 40, 50, 70]
print("Level Order:", level_order(root))  # [50, 30, 70, 20, 40]
print("Height:", height(root))         # 2
```

---

## 4.5 Important Questions

### 📗 Basic
1. Define tree, binary tree, and BST.
2. What is the difference between height and depth of a node?
3. What are leaf nodes?

### 📘 Medium
4. Find the height of a binary tree.
5. Check if a binary tree is BST.
6. Find the diameter of a binary tree.
7. Check if two trees are identical.

### 📕 Exam Theory
8. What is the difference between complete, full, and perfect binary tree?
9. What is inorder traversal of a BST? Why is it sorted?
10. What happens during BST deletion when a node has two children?
11. What is a balanced tree? Why is balancing important?

### 💻 Coding
12. Find the lowest common ancestor (LCA) in a binary tree.
13. Level order traversal line by line.
14. Serialize and deserialize a binary tree.
15. Check if a binary tree is balanced.

---

## 4.6 Solutions

### Q5 — Check if Binary Tree is BST

```python
def is_bst(root, min_val=float('-inf'), max_val=float('inf')):
    if not root: return True
    # Current node must be within valid range
    if root.val <= min_val or root.val >= max_val:
        return False
    # Left subtree: all values < root.val
    # Right subtree: all values > root.val
    return (is_bst(root.left, min_val, root.val) and
            is_bst(root.right, root.val, max_val))
```

### Q6 — Diameter of Binary Tree

```python
def diameter(root):
    max_d = [0]
    def height(node):
        if not node: return 0
        left = height(node.left)
        right = height(node.right)
        max_d[0] = max(max_d[0], left + right)  # update diameter
        return 1 + max(left, right)
    height(root)
    return max_d[0]
```

---

## 4.7 Revision Notes

### ⚡ Quick Revision Points
- Tree: hierarchical, no cycles, one root
- BST property: Left < Root < Right
- Inorder of BST = sorted array
- Height of tree = edges from root to deepest leaf
- BST: O(log n) average, O(n) worst (skewed)
- 4 traversals: Inorder, Preorder, Postorder, Level Order

### 📐 Key Formulas
```
Max nodes at level L  = 2^(L-1)
Max nodes in tree h   = 2^(h+1) - 1
Min nodes for height h= h + 1
Leaves in perfect tree= 2^h
```

---

## 4.8 Cheatsheet — TREES

```
╔══════════════════════════════════════════════════════════╗
║                     TREES CHEATSHEET                    ║
╠══════════════════════════════════════════════════════════╣
║  TRAVERSALS                                             ║
║  Inorder   (LNR): Left→Root→Right [BST=sorted]        ║
║  Preorder  (NLR): Root→Left→Right [copy/prefix]       ║
║  Postorder (LRN): Left→Right→Root [delete/postfix]    ║
║  Level BFS      : Use Queue                            ║
╠══════════════════════════════════════════════════════════╣
║  BST COMPLEXITY          AVG      WORST                ║
║  Search/Insert/Delete   O(log n)  O(n) skewed          ║
║  Traversal              O(n)      O(n)                 ║
╠══════════════════════════════════════════════════════════╣
║  KEY FORMULAS                                           ║
║  Max nodes (height h) = 2^(h+1) - 1                   ║
║  Height (n nodes)     = ⌊log₂(n)⌋                    ║
╠══════════════════════════════════════════════════════════╣
║  BST DELETE CASES                                       ║
║  0 children → just remove                              ║
║  1 child    → link parent to child                     ║
║  2 children → replace with inorder successor           ║
╠══════════════════════════════════════════════════════════╣
║  TREE TYPES                                             ║
║  Full: 0 or 2 children always                          ║
║  Complete: filled left-to-right                        ║
║  Perfect: all leaves same level                        ║
║  Balanced: height diff ≤ 1 (AVL)                       ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# 5. INFIX TO POSTFIX CONVERSION

---

## 5.1 Concept Explanation

### 📌 Definition
**Infix notation:** Operator is between operands → `A + B`
**Postfix notation:** Operator is after both operands → `A B +`
**Prefix notation:** Operator is before both operands → `+ A B`

### 🧠 Intuition
Computers cannot easily evaluate infix expressions because they require knowing the precedence and associativity of operators. **Postfix** (Reverse Polish Notation) eliminates the need for parentheses — operators naturally apply to the two nearest operands.

### ❓ Why is it Used?
- Compilers convert infix to postfix internally before evaluation.
- Postfix evaluation needs only a **single left-to-right scan** — no backtracking.
- No parentheses needed — precedence is implicit in ordering.

### 🌍 Real-World Applications
- Compiler design (expression parsing)
- Calculator implementations
- Stack-based virtual machines (JVM, Python interpreter)

---

## 5.2 Detailed Notes

### 📐 Operator Precedence (Higher = Evaluated First)

| Operator | Precedence | Associativity |
|---|---|---|
| `^` or `**` (Power) | 3 (Highest) | Right to Left |
| `*`, `/`, `%` | 2 | Left to Right |
| `+`, `-` | 1 (Lowest) | Left to Right |
| `(` | 0 (special) | — |

### 🔧 Algorithm — Infix to Postfix

```
Initialize empty STACK and empty OUTPUT string

For each character in infix expression:
  1. If OPERAND (a-z, A-Z, 0-9) → add to OUTPUT directly
  2. If '(' → PUSH to stack
  3. If ')' → POP and output until '(' is found; discard both '('
  4. If OPERATOR:
       While stack NOT empty
         AND top of stack is NOT '('
         AND top precedence ≥ current operator precedence:
           POP top and add to OUTPUT
       PUSH current operator to stack

After scanning: POP all remaining operators from stack to OUTPUT
```

### ⚠️ Special Rule — Right Associative Operators
- For `^` (right-associative): Pop only when top precedence **strictly greater** (not equal)
- This ensures `2^3^2 = 2^(3^2) = 2^9 = 512`, not `(2^3)^2 = 64`

### 📊 Complexity
| Step | Time | Space |
|---|---|---|
| Conversion | O(n) | O(n) |
| Evaluation | O(n) | O(n) |

### 🚫 Common Student Mistakes
- Forgetting to pop all remaining operators at the end
- Not handling right-associativity of `^`
- Using `>=` for right-associative operators (should use `>`)
- Not discarding `(` when `)` is encountered
- Confusing postfix **conversion** with postfix **evaluation**

---

## 5.3 Visual Understanding

### 🔁 Dry Run — Infix: `A + B * C - D`

```
Symbol | Action                  | Stack      | Output
-------+-------------------------+------------+--------
A      | Operand → output        | []         | A
+      | Stack empty → push      | [+]        | A
B      | Operand → output        | [+]        | AB
*      | Prec(*) > Prec(+)→push  | [+ *]      | AB
C      | Operand → output        | [+ *]      | ABC
-      | Prec(-) ≤ Prec(*) → pop | [+ -]      | ABC*
       | Prec(-) ≤ Prec(+) → pop | [-]        | ABC*+
       | Stack empty → push -    | [-]        | ABC*+
D      | Operand → output        | [-]        | ABC*+D
END    | Pop all remaining       | []         | ABC*+D-

Final Postfix: A B C * + D -
```

### 🔁 Dry Run — Infix: `(A + B) * (C - D)`

```
Symbol | Action                          | Stack     | Output
-------+---------------------------------+-----------+-------
(      | Push (                          | [(]       |
A      | Operand                         | [(]       | A
+      | Push (top is '(')               | [( +]     | A
B      | Operand                         | [( +]     | AB
)      | Pop until ( → pop +, discard (  | []        | AB+
*      | Stack empty → push              | [*]       | AB+
(      | Push (                          | [* (]     | AB+
C      | Operand                         | [* (]     | AB+C
-      | Push (top is '(')               | [* ( -]   | AB+C
D      | Operand                         | [* ( -]   | AB+CD
)      | Pop until ( → pop -, discard (  | [*]       | AB+CD-
END    | Pop all                         | []        | AB+CD-*

Final Postfix: A B + C D - *
```

### 🔁 Postfix Evaluation — Dry Run: `5 1 2 + 4 * + 3 -`

```
Token  | Action                   | Stack
-------+--------------------------+----------
5      | Push 5                   | [5]
1      | Push 1                   | [5, 1]
2      | Push 2                   | [5, 1, 2]
+      | Pop 2,1 → 1+2=3, push 3  | [5, 3]
4      | Push 4                   | [5, 3, 4]
*      | Pop 4,3 → 3*4=12, push   | [5, 12]
+      | Pop 12,5 → 5+12=17, push | [17]
3      | Push 3                   | [17, 3]
-      | Pop 3,17 → 17-3=14, push | [14]

Result: 14 ✅
```

---

## 5.4 Code Implementation

### C++ — Infix to Postfix

```cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// ============================================================
// INFIX TO POSTFIX — C++
// ============================================================

// Returns precedence of operator
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperand(char c) {
    return isalpha(c) || isdigit(c);
}

string infixToPostfix(string infix) {
    stack<char> st;
    string result = "";

    for (char c : infix) {
        if (isOperand(c)) {
            result += c;         // operand → directly to output
        } else if (c == '(') {
            st.push(c);          // push opening bracket
        } else if (c == ')') {
            // Pop until matching '('
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();            // discard '('
        } else {
            // Operator
            // Pop while: stack not empty, top not '(',
            // top precedence >= current (left-assoc)
            // Use > for right-associative (like ^)
            while (!st.empty() && st.top() != '(' &&
                   precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all remaining operators
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

// Postfix Evaluation
int evaluatePostfix(string postfix) {
    stack<int> st;
    for (char c : postfix) {
        if (isdigit(c)) {
            st.push(c - '0');    // char to int
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (c == '+') st.push(a + b);
            if (c == '-') st.push(a - b);
            if (c == '*') st.push(a * b);
            if (c == '/') st.push(a / b);
        }
    }
    return st.top();
}

int main() {
    string infix = "A+B*C-D";
    cout << "Infix:   " << infix << "\n";
    cout << "Postfix: " << infixToPostfix(infix) << "\n";
    // Output: ABC*+D-

    string postfix = "512+4*+3-";
    cout << "Postfix Eval: " << evaluatePostfix(postfix) << "\n"; // 14
    return 0;
}
```

### Java — Infix to Postfix

```java
// ============================================================
// INFIX TO POSTFIX — JAVA
// ============================================================
import java.util.Stack;

public class InfixToPostfix {

    static int precedence(char op) {
        switch(op) {
            case '^': return 3;
            case '*': case '/': return 2;
            case '+': case '-': return 1;
            default: return 0;
        }
    }

    static boolean isOperand(char c) {
        return Character.isLetterOrDigit(c);
    }

    static String convert(String infix) {
        Stack<Character> stack = new Stack<>();
        StringBuilder result = new StringBuilder();

        for (char c : infix.toCharArray()) {
            if (isOperand(c)) {
                result.append(c);
            } else if (c == '(') {
                stack.push(c);
            } else if (c == ')') {
                while (!stack.isEmpty() && stack.peek() != '(')
                    result.append(stack.pop());
                stack.pop();  // discard '('
            } else {
                while (!stack.isEmpty() && stack.peek() != '(' &&
                        precedence(stack.peek()) >= precedence(c))
                    result.append(stack.pop());
                stack.push(c);
            }
        }

        while (!stack.isEmpty())
            result.append(stack.pop());

        return result.toString();
    }

    public static void main(String[] args) {
        System.out.println(convert("A+B*C-D"));     // ABC*+D-
        System.out.println(convert("(A+B)*(C-D)")); // AB+CD-*
    }
}
```

### Python — Infix to Postfix

```python
# ============================================================
# INFIX TO POSTFIX — PYTHON
# ============================================================

def precedence(op):
    if op == '^': return 3
    if op in ('*', '/'): return 2
    if op in ('+', '-'): return 1
    return 0

def infix_to_postfix(infix):
    stack = []
    result = []

    for char in infix:
        if char.isalnum():           # operand
            result.append(char)
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                result.append(stack.pop())
            stack.pop()              # remove '('
        else:                        # operator
            while (stack and stack[-1] != '(' and
                   precedence(stack[-1]) >= precedence(char)):
                result.append(stack.pop())
            stack.append(char)

    while stack:                     # remaining operators
        result.append(stack.pop())

    return ''.join(result)


def evaluate_postfix(postfix):
    stack = []
    for token in postfix.split():
        if token.lstrip('-').isdigit():
            stack.append(int(token))
        else:
            b = stack.pop()
            a = stack.pop()
            if token == '+': stack.append(a + b)
            elif token == '-': stack.append(a - b)
            elif token == '*': stack.append(a * b)
            elif token == '/': stack.append(int(a / b))

    return stack[0]


# Tests
print(infix_to_postfix("A+B*C-D"))     # ABC*+D-
print(infix_to_postfix("(A+B)*(C-D)")) # AB+CD-*
print(evaluate_postfix("5 1 2 + 4 * + 3 -"))  # 14
```

---

## 5.5 Important Questions

### 📗 Basic
1. What is infix, postfix, and prefix notation? Give examples.
2. Why do computers prefer postfix over infix notation?
3. What is the role of the stack in infix to postfix conversion?

### 📘 Medium
4. Convert `A + B * (C - D) / E` to postfix.
5. Evaluate postfix: `2 3 4 + *`
6. Convert prefix `* + A B - C D` to infix.

### 📕 Exam Theory
7. Explain the role of operator precedence and associativity in conversion.
8. Why is `^` treated differently from `+` and `*` during conversion?
9. What happens when we encounter `)` during conversion?

### 💻 Coding
10. Implement infix to prefix conversion.
11. Evaluate a postfix expression with multi-digit numbers.

---

## 5.6 Solutions

### Q4 — Convert `A + B * (C - D) / E`

```
Step-by-step:
A → Output: A
+ → Stack: [+]
B → Output: AB
* → Prec(*) > Prec(+) → push. Stack: [+ *]
( → push. Stack: [+ * (]
C → Output: ABC
- → top is ( → push. Stack: [+ * ( -]
D → Output: ABCD
) → pop until (: pop -, Stack: [+ *], Output: ABCD-
/ → Prec(/) == Prec(*) → pop *. Stack: [+ /], Output: ABCD-*
  → Prec(/) > Prec(+) → push /. Stack: [+ /]
E → Output: ABCD-*E
END → pop all: pop /, pop +
Final: ABCD-*E/+
```

---

## 5.7 Revision Notes

### ⚡ Quick Revision Points
- Infix: A+B | Postfix: AB+ | Prefix: +AB
- Stack used for conversion
- Operand → directly to output
- `(` → push | `)` → pop until matching `(`
- Operators: pop same/higher precedence from stack first
- `^` is right-associative → use `>` not `>=`
- At end, pop all remaining operators

### 📐 Precedence Table
```
^  →  3  (right-associative)
*, /  →  2
+, -  →  1
(     →  0 (never popped by operators)
```

---

## 5.8 Cheatsheet — INFIX TO POSTFIX

```
╔══════════════════════════════════════════════════════════╗
║              INFIX TO POSTFIX CHEATSHEET                ║
╠══════════════════════════════════════════════════════════╣
║  NOTATIONS                                              ║
║  Infix:   A + B    (human readable)                    ║
║  Postfix: A B +    (machine friendly, no brackets)     ║
║  Prefix:  + A B                                        ║
╠══════════════════════════════════════════════════════════╣
║  ALGORITHM RULES                                        ║
║  Operand       → OUTPUT directly                       ║
║  '('           → PUSH to stack                         ║
║  ')'           → POP until '(' found; discard '('     ║
║  Operator op   → POP stack while top prec ≥ prec(op)  ║
║                  THEN PUSH op                          ║
║  End of input  → POP all remaining operators           ║
╠══════════════════════════════════════════════════════════╣
║  PRECEDENCE: ^(3) > */%(2) > +-(1) > ((0)             ║
║  ^ is RIGHT-associative → use > not >= when popping   ║
╠══════════════════════════════════════════════════════════╣
║  POSTFIX EVALUATION                                     ║
║  Operand → PUSH                                        ║
║  Operator → POP two, compute, PUSH result              ║
║  Note: a=first pop, b=second pop → compute b OP a     ║
╠══════════════════════════════════════════════════════════╣
║  COMPLEXITY: O(n) time, O(n) space                     ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# 6. POINTERS

---

## 6.1 Concept Explanation

### 📌 Definition
A **pointer** is a variable that stores the **memory address** of another variable.
- Regular variable: stores a **value** (e.g., `int x = 10`)
- Pointer variable: stores an **address** (e.g., `int* p = &x`)

### 🧠 Intuition
Think of memory as a city with numbered houses:
- Each house (memory cell) has an **address**.
- A regular variable is the **house** (stores content).
- A pointer is a **notepad** that writes down the **address** of a house.
- To read the house's content via notepad → **dereference** the pointer.

### ❓ Why are Pointers Used?
- **Dynamic memory allocation** — Allocate memory at runtime
- **Pass by reference** — Modify function arguments
- **Data structures** — Linked lists, trees, graphs
- **Efficiency** — Avoid copying large data structures

### 🌍 Real-World Applications
| Application | Pointer Use |
|---|---|
| Linked List | Node's `next` pointer connects nodes |
| Dynamic arrays | `malloc`/`new` allocates heap memory |
| Function pointers | Callbacks, plugins |
| OS Kernel | Process control blocks, memory maps |

---

## 6.2 Detailed Notes

### 📐 Key Concepts

| Concept | Symbol | Meaning |
|---|---|---|
| Address-of | `&x` | Get address of variable x |
| Dereference | `*p` | Get value at address stored in p |
| Pointer declaration | `int* p` | p is a pointer to an integer |
| NULL pointer | `p = NULL` | p points to nothing |
| Pointer arithmetic | `p++` | Move to next memory location |

### 📐 Pointer Types

| Type | Description |
|---|---|
| **NULL pointer** | Points to nothing; safest uninitialized state |
| **Wild pointer** | Uninitialized pointer; points to garbage |
| **Dangling pointer** | Points to freed/deleted memory |
| **Void pointer** | `void*` — can point to any type |
| **Function pointer** | Points to a function |

### 📐 Pointer Arithmetic

```
If int* p points to address 1000:
  p + 1  → address 1004  (int = 4 bytes)
  p + 2  → address 1008
  p - 1  → address 996

If char* p points to address 1000:
  p + 1  → address 1001  (char = 1 byte)
```

### 📐 Dynamic Memory Allocation

| Language | Allocate | Free |
|---|---|---|
| C | `malloc()`, `calloc()`, `realloc()` | `free()` |
| C++ | `new` | `delete` |
| Java/Python | Automatic (Garbage Collector) | Automatic |

### ✅ Advantages
- Enable dynamic memory allocation
- Allow efficient pass-by-reference
- Form the basis of complex data structures
- Enable direct memory manipulation

### ❌ Disadvantages / Dangers
- **Segmentation fault** — Accessing invalid memory
- **Memory leak** — Forgetting to free allocated memory
- **Dangling pointer** — Using freed memory
- **Buffer overflow** — Writing beyond allocated space
- Complex to debug

### ⚠️ Edge Cases
1. **NULL pointer dereference** → Segfault
2. **Double free** → Undefined behavior
3. **Wild pointer** → Random memory corruption
4. **Pointer to local variable returned from function** → Dangling pointer

### 🚫 Common Student Mistakes
- Confusing `*p` (dereference) with `&p` (address of pointer)
- Not initializing pointer to NULL
- Forgetting to `delete`/`free` dynamically allocated memory
- Pointer to local variable that goes out of scope
- Confusing array name with pointer (array name is constant pointer)

---

## 6.3 Visual Understanding

### 📦 Pointer Memory Visualization

```
int x = 42;
int* p = &x;

Memory Layout:
Address:  1000   1001   1002   ...   2000
Value:    [42 ]  [  ]   [  ]   ...  [1000]
Variable:  x                          p

p stores address 1000 (address of x)
*p returns 42 (value at address 1000)
```

### 📦 Double Pointer

```
int x = 10;
int* p = &x;    // p stores address of x
int** pp = &p;  // pp stores address of p

    pp    →   p    →   x
  [addr]   [1000]    [10]
  of p     = addr    = value
             of x
```

### 📦 Pointer Arithmetic Visualization

```
int arr[] = {10, 20, 30, 40};
int* p = arr;  // p points to arr[0]

p →  [10][20][30][40]
     1000 1004 1008 1012

*(p)   = 10
*(p+1) = 20
*(p+2) = 30
*(p+3) = 40
```

---

## 6.4 Code Implementation

### C++ — Pointers (Comprehensive)

```cpp
#include <iostream>
using namespace std;

// ============================================================
// POINTERS IN C++
// ============================================================

void swap(int* a, int* b) {
    // Pass by pointer → modifies original
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // ── BASIC POINTER ──
    int x = 42;
    int* p = &x;         // p holds address of x

    cout << "x  = " << x  << "\n";    // 42
    cout << "&x = " << &x << "\n";    // address (e.g., 0x7fff...)
    cout << "p  = " << p  << "\n";    // same address
    cout << "*p = " << *p << "\n";    // 42 (dereference)

    *p = 100;                          // change x through pointer
    cout << "x after *p=100: " << x << "\n"; // 100

    // ── POINTER ARITHMETIC ──
    int arr[] = {10, 20, 30};
    int* ptr = arr;
    for (int i = 0; i < 3; i++) {
        cout << *(ptr + i) << " ";    // 10 20 30
    }
    cout << "\n";

    // ── DYNAMIC MEMORY ALLOCATION ──
    int* dynArr = new int[5];     // allocate 5 ints on heap
    for (int i = 0; i < 5; i++)
        dynArr[i] = i * 10;
    for (int i = 0; i < 5; i++)
        cout << dynArr[i] << " "; // 0 10 20 30 40
    delete[] dynArr;              // ALWAYS free!

    // ── NULL POINTER ──
    int* nullPtr = nullptr;       // safe initialization
    if (nullPtr == nullptr)
        cout << "Null pointer — safe\n";

    // ── SWAP USING POINTERS ──
    int a = 5, b = 10;
    swap(&a, &b);
    cout << "a=" << a << " b=" << b << "\n"; // a=10, b=5

    // ── DOUBLE POINTER ──
    int val = 99;
    int* ptr1 = &val;
    int** ptr2 = &ptr1;
    cout << **ptr2 << "\n";       // 99

    return 0;
}
```

### Java — References (Java uses References, not Pointers)

```java
// ============================================================
// REFERENCES IN JAVA (Java equivalent of pointers)
// ============================================================
public class PointerDemo {

    // Java doesn't have explicit pointers
    // Objects are passed by reference automatically
    
    static class Box {
        int value;
        Box(int v) { value = v; }
    }

    // Primitives are pass-by-VALUE
    static void tryChangeInt(int x) {
        x = 100;  // Does NOT change original
    }

    // Objects are pass-by-REFERENCE (reference copy)
    static void changeBox(Box b) {
        b.value = 100;  // DOES change original object
    }

    public static void main(String[] args) {
        int num = 42;
        tryChangeInt(num);
        System.out.println(num);  // Still 42

        Box box = new Box(42);
        changeBox(box);
        System.out.println(box.value);  // 100 ← changed

        // Null reference
        Box nullBox = null;
        if (nullBox == null)
            System.out.println("null reference");
        // nullBox.value → NullPointerException!
    }
}
```

### Python — Pointers Concept (Python uses References)

```python
# ============================================================
# REFERENCES IN PYTHON (Python equivalent of pointers)
# ============================================================

# Python uses references (like Java), not raw pointers

# Immutable types (int, str, tuple) → pass by value semantics
x = 10
def modify_int(n):
    n = 100     # creates new local variable
    
modify_int(x)
print(x)        # Still 10

# Mutable types (list, dict) → pass by reference semantics
lst = [1, 2, 3]
def modify_list(l):
    l.append(4)  # modifies the ORIGINAL list

modify_list(lst)
print(lst)       # [1, 2, 3, 4]

# id() gives memory address (like &variable in C)
a = [1, 2, 3]
b = a           # b is another reference to same list
print(id(a) == id(b))  # True — same address

b.append(99)
print(a)        # [1, 2, 3, 99] — a also changed!

# To copy (not reference):
c = a.copy()    # shallow copy — c is independent
c.append(0)
print(a)        # [1, 2, 3, 99] — a unchanged
```

---

## 6.5 Important Questions

### 📗 Basic
1. What is a pointer? How is it different from a regular variable?
2. What is the difference between `*p` and `&p`?
3. What is a NULL pointer? Why should pointers be initialized to NULL?

### 📘 Medium
4. What is a dangling pointer? How can it occur? How to avoid it?
5. What is the difference between `malloc` and `calloc`?
6. Explain pointer arithmetic with an example.
7. What is a void pointer? When is it used?

### 📕 Exam Theory
8. What is the difference between pass-by-value and pass-by-reference?
9. Explain memory leak with an example.
10. What is a wild pointer? How is it different from a null pointer?
11. How does `new` differ from `malloc` in C++?

### 💻 Coding
12. Swap two numbers using pointers.
13. Reverse an array using pointers.
14. Implement dynamic array using pointers.

---

## 6.6 Solutions

### Q4 — Dangling Pointer

```cpp
// DANGLING POINTER EXAMPLE
int* createDangling() {
    int local = 10;       // local variable
    return &local;        // ❌ DANGER: returning address of local variable
    // local is destroyed when function returns
    // returned pointer now points to freed stack memory
}

// HOW TO AVOID:
int* safe() {
    int* p = new int(10); // heap allocation — persists after function
    return p;             // ✅ Safe — caller must delete p later
}
```

### Q12 — Swap Using Pointers

```cpp
void swap(int* a, int* b) {
    int temp = *a;   // dereference: read value at a
    *a = *b;         // write value at b into address a
    *b = temp;       // write old value of a into address b
}
// Call: swap(&x, &y);
```

---

## 6.7 Revision Notes

### ⚡ Quick Revision Points
- Pointer stores **memory address** of another variable
- `&x` = address of x | `*p` = value at address stored in p
- Always initialize pointer to NULL before use
- `new`/`malloc` = heap allocation; must `delete`/`free`
- Pointer arithmetic: `p + n` moves by n × sizeof(type) bytes
- Array name = constant pointer to first element

### 📐 Key Pointer Facts
```
int x = 10;
int* p = &x;

*p = 10     (value)
p = 1000    (address of x)
&p = 2000   (address of pointer p itself)

sizeof(pointer) = 4 bytes (32-bit) or 8 bytes (64-bit)
```

### 🔥 Common Exam Questions
1. Difference between pointer and reference
2. Dangling pointer vs null pointer vs wild pointer
3. Memory leak explanation
4. Pointer arithmetic
5. Dynamic memory allocation

---

## 6.8 Cheatsheet — POINTERS

```
╔══════════════════════════════════════════════════════════╗
║                   POINTERS CHEATSHEET                   ║
╠══════════════════════════════════════════════════════════╣
║  BASICS                                                 ║
║  int x = 10;    → regular variable                     ║
║  int* p = &x;   → pointer to x                        ║
║  *p = value at address p                               ║
║  &x = address of x                                     ║
╠══════════════════════════════════════════════════════════╣
║  POINTER TYPES                                          ║
║  NULL     → p = nullptr    [safe uninitialized]        ║
║  Wild     → uninitialized  [DANGEROUS]                 ║
║  Dangling → points to freed memory [DANGEROUS]         ║
║  Void*    → generic pointer (any type)                 ║
╠══════════════════════════════════════════════════════════╣
║  POINTER ARITHMETIC (int*, 4 bytes)                    ║
║  p + 1  → moves 4 bytes forward                        ║
║  p - 1  → moves 4 bytes backward                       ║
║  p[i]   → same as *(p + i)                            ║
╠══════════════════════════════════════════════════════════╣
║  DYNAMIC MEMORY                                         ║
║  C:   malloc(size) / free(ptr)                         ║
║  C++: new type / delete ptr                            ║
║  C++: new type[n] / delete[] ptr                       ║
╠══════════════════════════════════════════════════════════╣
║  COMMON BUGS                                            ║
║  ❌ Dereference NULL → Segfault                         ║
║  ❌ Use after free → Dangling pointer                   ║
║  ❌ Forget to free → Memory leak                        ║
║  ❌ Wild pointer → Undefined behavior                   ║
╚══════════════════════════════════════════════════════════╝
```

---

---

# COMPARISON: Stack vs Queue

```
╔════════════════════════════════════════════════════════════════╗
║                  STACK vs QUEUE — COMPARISON                   ║
╠════════════╦═══════════════════════════╦════════════════════════╣
║ Feature    ║ STACK                     ║ QUEUE                  ║
╠════════════╬═══════════════════════════╬════════════════════════╣
║ Principle  ║ LIFO                      ║ FIFO                   ║
║ End Used   ║ Single end (TOP)          ║ Two ends (FRONT, REAR) ║
║ Insert     ║ PUSH at top              ║ ENQUEUE at rear        ║
║ Delete     ║ POP from top             ║ DEQUEUE from front     ║
║ Peek       ║ Top element              ║ Front element          ║
║ Use Case   ║ DFS, undo, recursion     ║ BFS, scheduling        ║
║ Real-World ║ Browser back, call stack ║ Print spooler, CPU sched║
╚════════════╩═══════════════════════════╩════════════════════════╝
```

---

# COMPARISON: BFS vs DFS

```
╔════════════════════════════════════════════════════════════════╗
║                    BFS vs DFS — COMPARISON                     ║
╠════════════╦═══════════════════════════╦════════════════════════╣
║ Feature    ║ BFS                       ║ DFS                    ║
╠════════════╬═══════════════════════════╬════════════════════════╣
║ Stands for ║ Breadth-First Search      ║ Depth-First Search     ║
║ Data Struct║ Queue                     ║ Stack (or recursion)   ║
║ Traversal  ║ Level by level            ║ Go deep then backtrack ║
║ Shortest   ║ Finds shortest path       ║ May not find shortest  ║
║ Space      ║ O(w) — width of tree      ║ O(h) — height of tree  ║
║ Use Case   ║ Shortest path, social net ║ Cycle detect, maze     ║
║ Complete?  ║ Yes (finds all)           ║ Yes (with backtrack)   ║
╚════════════╩═══════════════════════════╩════════════════════════╝
```

---

# 🎯 INTERVIEW + EXAM FOCUS

## Most Important Questions (High Probability)

### Stack
- ✅ Evaluate postfix expression
- ✅ Infix to postfix conversion
- ✅ Balanced brackets
- ✅ Next Greater Element
- ✅ Min Stack (O(1) getMin)
- ✅ Implement stack using queue

### Queue
- ✅ Circular queue implementation + full condition
- ✅ Queue using two stacks
- ✅ BFS on graph/tree
- ✅ Generate binary numbers using queue

### Linked List
- ✅ Reverse a linked list
- ✅ Detect cycle (Floyd's algorithm)
- ✅ Find middle node
- ✅ Merge two sorted lists
- ✅ Nth node from end

### Trees
- ✅ All 4 traversals (code + output)
- ✅ BST insert and search
- ✅ BST delete (especially two-children case)
- ✅ Height of binary tree
- ✅ Check if BST
- ✅ Level order traversal

### Infix to Postfix
- ✅ Convert with operator precedence
- ✅ Handle parentheses
- ✅ Evaluate postfix
- ✅ Trace execution step by step

### Pointers
- ✅ Dangling vs null vs wild pointer
- ✅ Pass-by-value vs pass-by-reference
- ✅ Memory leak explanation
- ✅ Dynamic memory in C/C++
- ✅ Pointer arithmetic

---

# 📝 PRACTICE SET (Easy → Hard)

## Stack Practice
1. *(Easy)* Implement a stack using an array. Push 5, 10, 15. Pop twice and print remaining.
2. *(Easy)* Check if `{[()]}` is balanced.
3. *(Medium)* Evaluate postfix `3 4 + 2 * 7 /`
4. *(Medium)* Find next greater element for `[4, 5, 2, 10, 8]`
5. *(Hard)* Implement a stack that supports push, pop, and getMin() all in O(1).

## Queue Practice
6. *(Easy)* Implement a circular queue of size 4. Enqueue 1,2,3,4. Dequeue twice. Enqueue 5,6. Show state.
7. *(Medium)* Implement a queue using two stacks.
8. *(Medium)* Generate all binary strings of length 4 using a queue.

## Tree Practice
9. *(Medium)* Build a BST by inserting: 15, 10, 20, 8, 12, 25. Show the tree. Perform inorder traversal.
10. *(Hard)* Delete node 10 from the above BST (it has two children). Show step-by-step.

## Linked List Practice
11. *(Easy)* Create a linked list: 10 → 20 → 30 → 40. Delete node with value 20. Print result.
12. *(Medium)* Find the middle of linked list: 1 → 2 → 3 → 4 → 5 using slow-fast pointer.

## Infix to Postfix Practice
13. *(Medium)* Convert `A * B + C * D` to postfix. Show stack trace.
14. *(Medium)* Convert `(A + B) * C - D / E` to postfix.
15. *(Hard)* Convert `A ^ B ^ C` to postfix (note: ^ is right-associative).

---

# 📋 MASTER CHEATSHEET — ALL TOPICS

```
╔══════════════════════════════════════════════════════════════════╗
║           DSA MASTER CHEATSHEET — EXAM QUICK REFERENCE         ║
╠══════════════════════════════════════════════════════════════════╣
║  STACK                                                          ║
║  • LIFO  | Push/Pop/Peek → O(1) | Space O(n)                   ║
║  • top starts at -1 | top+1 = size                             ║
║  • Uses: Brackets, Postfix, DFS, Undo, Recursion               ║
╠══════════════════════════════════════════════════════════════════╣
║  QUEUE                                                          ║
║  • FIFO  | Enqueue/Dequeue → O(1) circular                     ║
║  • Circular: rear=(rear+1)%MAX | full=(rear+1)%MAX==front      ║
║  • Uses: BFS, Scheduling, Buffer, Print Spooler                ║
╠══════════════════════════════════════════════════════════════════╣
║  LINKED LIST                                                    ║
║  • Node = [data | next] | Traversal O(n)                       ║
║  • Insert/Delete at head O(1) | at tail O(n)                   ║
║  • Reverse: 3 ptrs (prev,curr,next) | Cycle: Floyd's          ║
║  • Middle: slow+fast pointer                                    ║
╠══════════════════════════════════════════════════════════════════╣
║  TREES                                                          ║
║  • BST: Left < Root < Right | Inorder = sorted                 ║
║  • Traversals: Inorder(LNR), Pre(NLR), Post(LRN), BFS(Queue)  ║
║  • Height = edges root to deepest | Max nodes = 2^(h+1)-1     ║
║  • Delete 2 children → use inorder successor                   ║
╠══════════════════════════════════════════════════════════════════╣
║  INFIX → POSTFIX                                                ║
║  • Operand→Output | (→Push | )→Pop till ( | Op→Pop≥prec       ║
║  • Precedence: ^(3) > */%(2) > +-(1)                          ║
║  • ^: right-associative → use > not >=                        ║
║  • Postfix eval: operand→push | op→pop2,compute,push          ║
╠══════════════════════════════════════════════════════════════════╣
║  POINTERS                                                       ║
║  • &x = address | *p = value at address                        ║
║  • Null=safe | Wild=danger | Dangling=freed memory            ║
║  • p+1 moves sizeof(type) bytes forward                        ║
║  • Always free/delete to prevent memory leak                   ║
╚══════════════════════════════════════════════════════════════════╝
```

---
*© DSA Exam Mastery Notes | Topics: Stack, Queue, Linked List, Trees, Infix-Postfix, Pointers*
*Prepared for Exam Excellence — Study Hard! 🚀*