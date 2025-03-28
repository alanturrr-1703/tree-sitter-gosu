class Dog {
    var eye;
    var tail;

    construct(eye: String, tail: String) {
        this.eye = eye;
        this.tail = tail;
    }

    function describe(): String {
        return "Dog has " + eye + " eyes and a " + tail + " tail.";
    }
}

// Testing the class
var myDog = new Dog("brown", "curly");
print(myDog.describe());
