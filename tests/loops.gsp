// While loop example
function printWhileCount(n: int) {
  var i = 0
  while (i < n) {
    print("While loop iteration: ${i}")
    i += 1
  }
}

// Do-while loop example
function printDoWhileCount(n: int) {
  var i = 0
  do {
    print("Do-while loop iteration: ${i}")
    i += 1
  } while (i < n)
}

// Traditional for loop example
function printForLoop(n: int) {
  for (var i = 0; i < n; i += 1) {
    print("For loop iteration: ${i}")
  }
}

function printRange(): void {
  for (i in 1..5) {
    print("Range value: ${i}")
  }
}

// Main function to run all loop examples
function main(): void{
  print("=== While Loop ===")
  printWhileCount(3)

  print("\n=== Do-While Loop ===")
  printDoWhileCount(2)

  print("\n=== For Loop ===")
  printForLoop(3)

  print("\n=== For-In Loop over Array ===")
  printArrayItems()

  print("\n=== For-In Loop over Range ===")
  printRange()
}