# Prototype Pattern for Document Cloning

**Category**: Design Patterns  
**Difficulty**: Medium

## Problem Statement

Design a document management system where users can create new documents by cloning existing templates. Implement deep and shallow copying mechanisms for different document types (Text, Spreadsheet, Presentation).

## Requirements

### Functional Requirements
1. Clone documents with all their properties
2. Support both deep and shallow copying
3. Maintain document metadata (author, created date, version)
4. Clone embedded objects (images, charts, tables)
5. Register and manage document templates

### Non-Functional Requirements
1. Efficient cloning operation
2. Memory-efficient for large documents
3. Type-safe cloning

## Constraints

- Cloned documents should have unique IDs
- Some properties should not be cloned (e.g., creation timestamp)
- Embedded objects may need deep or shallow copying based on type
- Template registry should prevent duplicate registrations

## Expected Deliverables

### Class Design
- **Document**: Prototype interface with clone method
- **TextDocument, SpreadsheetDocument, PresentationDocument**: Concrete prototypes
- **DocumentRegistry**: Manages prototype instances
- **EmbeddedObject**: Interface for cloneable embedded content

### Key Operations
- `clone()`: Create copy of document - O(n) where n is document size
- `deepClone()`: Create deep copy - O(n)
- `registerTemplate(name, document)`: Add template - O(1)
- `getTemplate(name)`: Retrieve template - O(1)

### Design Patterns
- Prototype Pattern
- Registry Pattern

## Example Usage

```
DocumentRegistry registry = new DocumentRegistry();

TextDocument template = new TextDocument("Template");
template.addContent("Standard header");
registry.registerTemplate("standard-letter", template);

Document newDoc = registry.getTemplate("standard-letter").clone();
newDoc.setTitle("My Letter");
```

## Test Cases

### Test Case 1
**Input**: Clone document with embedded images  
**Expected Output**: New document with independent copy of images

### Test Case 2
**Input**: Shallow clone document  
**Expected Output**: Embedded objects shared between original and clone

### Test Case 3
**Input**: Clone document and modify clone  
**Expected Output**: Original document unchanged

## Evaluation Criteria

- Correct Prototype pattern implementation
- Proper deep vs shallow copy implementation
- Unique ID generation for clones
- Registry management
- Memory efficiency

## Additional Notes

Consider how to handle circular references in documents. Think about version control and document history tracking.
