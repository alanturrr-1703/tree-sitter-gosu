// Interface declaration
interface Animal {
  function speak(): String
  function move(): String
}

// Abstract class partially implementing Animal
abstract class Mammal implements Animal {
  var name: String

  construct(name: String) {
    this.name = name
  }

  // Abstract method - must be implemented by subclass
  abstract function speak(): String

  // Concrete method
  function move(): String {
    return "${name} walks on land"
  }
}

// Concrete class
class Dog extends Mammal {
  construct(name: String) {
    super(name)
  }

  override function speak(): String {
    return "${name} says: Woof!"
  }
}

// Another class implementing the interface directly
class Bird implements Animal {
  var name: String

  construct(name: String) {
    this.name = name
  }

  function speak(): String {
    return "${name} chirps!"
  }

  function move(): String {
    return "${name} flies in the sky"
  }
}

// Test runner
function main() {
  var a: Animal = new Dog("Bruno")
  print(a.speak())
  print(a.move())

  var b: Animal = new Bird("Tweety")
  print(b.speak())
  print(b.move())
}
