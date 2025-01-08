import XCTest
import SwiftTreeSitter
import TreeSittergosu

final class TreeSittergosuTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gosu())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading gosu grammar")
    }
}
