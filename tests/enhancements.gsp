uses java.lang.String
uses java.util.Date

// Enhancement adds new functionality to existing type
enhancement StringEnhancement on String {
  function reverseWords(): String {
    var words = this.split(" ")
    var reversed = ""
    for (i in words.length - 1..0 step -1) {
      reversed += words[i] + " "
    }
    return reversed.trim()
  }

  function shout(): String {
    return this.toUpperCase() + "!"
  }
}

// Class with properties and type inference
class Person {
  var name: String
  var birthDate: Date

  construct(name: String, birthDate: Date) {
    this.name = name
    this.birthDate = birthDate
  }

  function getAge(): int {
    var currentYear = new Date().getYear()
    return currentYear - birthDate.getYear()
  }
}

// Test runner
function main() {
  print("=== Enhancement ===")
  var sentence = "gosu is awesome"
  print("Original: ${sentence}")
  print("Reversed: ${sentence.reverseWords()}")
  print("Shouted: ${sentence.shout()}")

  print("\n=== Properties and Inference ===")
  var p = new Person("Harshit", new Date(100, 4, 11))  // May 11, 2000
  print("Name: ${p.name}")          // Property access
  print("Birth Year: ${p.birthDate.year}")  // Property chaining
  print("Age: ${p.age}")            // getAge() via property-style access
}
