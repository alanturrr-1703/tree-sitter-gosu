// Enum with constructor and method
enum Mood {
  Happy("😊"),
  Sad("😢"),
  Angry("😡"),
  Relaxed("😌")

  var emoji: String

  construct(emoji: String) {
    this.emoji = emoji
  }

  function describe(): String {
    return "Feeling ${name()} ${emoji}"
  }
}

// Test runner
function main() {
  var current = Mood.Happy
  print(current.describe())

  print("\nAll moods:")
  for (m in Mood.values()) {
    print(m.describe())
  }

  // Switch-case with enum
  switch (current) {
    case Mood.Happy:
      print("It's a good day!")
    case Mood.Sad:
      print("Cheer up!")
    case Mood.Angry:
      print("Take a deep breath.")
    case Mood.Relaxed:
      print("Enjoy the chill vibes.")
  }
}
