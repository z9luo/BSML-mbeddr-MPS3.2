package BSML.editor;

/*Generated by MPS */

import jetbrains.mps.nodeEditor.DefaultNodeEditor;
import jetbrains.mps.openapi.editor.cells.EditorCell;
import jetbrains.mps.openapi.editor.EditorContext;
import org.jetbrains.mps.openapi.model.SNode;
import jetbrains.mps.nodeEditor.cells.EditorCell_Collection;
import jetbrains.mps.nodeEditor.cells.EditorCell_Constant;
import jetbrains.mps.nodeEditor.EditorManager;
import jetbrains.mps.nodeEditor.attribute.AttributeKind;

public class SMFunctionAttribute_Editor extends DefaultNodeEditor {
  public EditorCell createEditorCell(EditorContext editorContext, SNode node) {
    return this.createCollection_oatsox_a(editorContext, node);
  }
  private EditorCell createCollection_oatsox_a(EditorContext editorContext, SNode node) {
    EditorCell_Collection editorCell = EditorCell_Collection.createVertical(editorContext, node);
    editorCell.setCellId("Collection_oatsox_a");
    editorCell.setBig(true);
    editorCell.addEditorCell(this.createConstant_oatsox_a0(editorContext, node));
    editorCell.addEditorCell(this.createAttributedNodeCell_oatsox_b0(editorContext, node));
    return editorCell;
  }
  private EditorCell createConstant_oatsox_a0(EditorContext editorContext, SNode node) {
    EditorCell_Constant editorCell = new EditorCell_Constant(editorContext, node, "state-machine function:");
    editorCell.setCellId("Constant_oatsox_a0");
    editorCell.setDefaultText("");
    return editorCell;
  }
  private EditorCell createAttributedNodeCell_oatsox_b0(EditorContext editorContext, SNode node) {
    EditorManager manager = EditorManager.getInstanceFromContext(editorContext);
    EditorCell editorCell = manager.getCurrentAttributedCellWithRole(AttributeKind.Node.class, node);
    return editorCell;
  }
}
