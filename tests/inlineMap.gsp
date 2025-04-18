uses java.util.HashMap
uses java.util.ArrayList
uses java.util.Date

// Class with named constructor arguments
class Car {
  var make: String
  var model: String
  var year: int

  construct(make: String, model: String, year: int) {
    this.make = make
    this.model = model
    this.year = year
  }

  override function toString(): String {
    return "${make} ${model} (${year})"
  }
}

// Function that throws an exception
function riskyDivide(x: int, y: int): int {
  if (y == 0) {
    throw new IllegalArgumentException("Division by zero!")
  }
  return x / y
}

function main() {
  print("=== Inline List ===")
  var fruits = {"Apple", "Banana", "Cherry"}  // ArrayList literal
  for (fruit in fruits) {
    print("Fruit: ${fruit}")
  }

  print("\n=== Inline Map ===")
  var capitals = {"India" -> "New Delhi", "France" -> "Paris"}  // HashMap literal
  for (country in capitals.keySet()) {
    print("${country} → ${capitals.get(country)}")
  }

  print("\n=== Named Constructor Args ===")
  var myCar = new Car(model: "Civic", make: "Honda", year: 2021)  // Named args
  print("My Car: ${myCar}")

  print("\n=== Exception Handling ===")
  try {
    var result = riskyDivide(10, 0)
    print("Result: ${result}")
  } catch (e: Exception) {
    print("Caught exception: ${e.message}")
  } finally {
    print("Always runs!")
  }
}
