@gosu.annotation.Usage(target = "Type, Method")
annotation DeveloperNote {
  author: String
  reviewed: boolean
}

// Annotated class
@DeveloperNote(author = "Harshit", reviewed = true)
class Calculator {
  
  @DeveloperNote(author = "Dev1", reviewed = false)
  function add(x: int, y: int): int {
    return x + y
  }

  function multiply(x: int, y: int): int {
    return x * y
  }
}

// Test runner
function main() {
  var calc = new Calculator()
  print("Add: ${calc.add(5, 3)}")
  print("Multiply: ${calc.multiply(4, 2)}")

  // Reflection: Check annotation on class
  var calcType = typeof Calculator
  var classNote = calcType.getTypeInfo().getAnnotation(DeveloperNote)
  if (classNote != null) {
    print("Class Author: ${classNote.author}, Reviewed: ${classNote.reviewed}")
  }

  // Reflection: Check annotation on method
  var addMethod = calcType.getTypeInfo().getMethod("add", {typeof(int), typeof(int)})
  var methodNote = addMethod.getAnnotation(DeveloperNote)
  if (methodNote != null) {
    print("Method 'add' Author: ${methodNote.author}, Reviewed: ${methodNote.reviewed}")
  }
}
