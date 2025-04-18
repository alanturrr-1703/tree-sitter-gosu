class Outer {
  var outerValue: String = "I'm the outer value"

  // Non-static inner class
  class Inner {
    function showOuterValue(): String {
      return "Inner sees: ${outerValue}"
    }
  }

  // Static nested class
  static class StaticInner {
    function greet(): String {
      return "Hello from StaticInner"
    }
  }

  function createInner(): Inner {
    return new Inner()
  }

  function createStaticInner(): StaticInner {
    return new StaticInner()
  }
}

// Test runner
function main() {
  var outer = new Outer()
  var inner = outer.createInner()
  print(inner.showOuterValue())   // Should access outer's value

  var staticInner = Outer.createStaticInner()
  print(staticInner.greet())      // Static inner class method

  // Direct access to non-static inner
  var directInner = new Outer().new Inner()
  print(directInner.showOuterValue())
}
