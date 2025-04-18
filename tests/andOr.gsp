// Helper functions to observe short-circuit behavior
function isTrue(label: String): boolean {
  print("${label}: isTrue() called")
  return true
}

function isFalse(label: String): boolean {
  print("${label}: isFalse() called")
  return false
}

function main() {
  print("=== Testing 'and' ===")
  if (isTrue("A") and isTrue("B")) {
    print("Result: true and true passed")
  }

  if (isTrue("C") and isFalse("D")) {
    print("Result: true and false passed")
  } else {
    print("Result: true and false failed")
  }

  print("\n=== Testing 'or' ===")
  if (isTrue("E") or isFalse("F")) {
    print("Result: true or false passed")
  }

  if (isFalse("G") or isFalse("H")) {
    print("Result: false or false passed")
  } else {
    print("Result: false or false failed")
  }

  print("\n=== Testing '&&' ===")
  if (isTrue("I") && isTrue("J")) {
    print("Result: true && true passed")
  }

  if (isTrue("K") && isFalse("L")) {
    print("Result: true && false passed")
  } else {
    print("Result: true && false failed")
  }

  print("\n=== Testing '||' ===")
  if (isTrue("M") || isFalse("N")) {
    print("Result: true || false passed")
  }

  if (isFalse("O") || isFalse("P")) {
    print("Result: false || false passed")
  } else {
    print("Result: false || false failed")
  }
}
