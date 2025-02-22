package tree_sitter_gosu_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gosu "github.com/tree-sitter/tree-sitter-gosu/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gosu.Language())
	if language == nil {
		t.Errorf("Error loading gosu grammar")
	}
}
