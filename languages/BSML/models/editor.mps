<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:45858d24-5da4-4000-b08f-23c7484613e9(BSML.editor)">
  <persistence version="9" />
  <languages>
    <use id="18bc6592-03a6-4e29-a83a-7ff23bde13ba" name="jetbrains.mps.lang.editor" version="3" />
    <devkit ref="fbc25dd2-5da4-483a-8b19-70928e1b62d7(jetbrains.mps.devkit.general-purpose)" />
  </languages>
  <imports>
    <import index="r4b4" ref="r:1784e088-20fd-4fdb-96b8-bc57f0056d94(com.mbeddr.core.base.editor)" />
    <import index="z60i" ref="6354ebe7-c22a-4a0f-ac54-50b52ab9b065/java:java.awt(JDK/)" />
    <import index="ahli" ref="r:44ccebce-f3a6-4238-afbf-c4a18f6348c1(com.mbeddr.core.buildconfig.behavior)" />
    <import index="hwgx" ref="r:fd2980c8-676c-4b19-b524-18c70e02f8b7(com.mbeddr.core.base.behavior)" />
    <import index="pz83" ref="r:db81e786-b1e9-4de0-bf44-e4204ced8ed5(BSML.structure)" implicit="true" />
    <import index="tpck" ref="r:00000000-0000-4000-0000-011c89590288(jetbrains.mps.lang.core.structure)" implicit="true" />
    <import index="gogl" ref="r:95a74a18-2b20-4b2c-abfc-ae789ce74f99(BSML.behavior)" implicit="true" />
    <import index="x27k" ref="r:75ecab8a-8931-4140-afc6-4b46398710fc(com.mbeddr.core.modules.structure)" implicit="true" />
  </imports>
  <registry>
    <language id="18bc6592-03a6-4e29-a83a-7ff23bde13ba" name="jetbrains.mps.lang.editor">
      <concept id="1071666914219" name="jetbrains.mps.lang.editor.structure.ConceptEditorDeclaration" flags="ig" index="24kQdi" />
      <concept id="1140524381322" name="jetbrains.mps.lang.editor.structure.CellModel_ListWithRole" flags="ng" index="2czfm3">
        <property id="1140524450557" name="separatorText" index="2czwfO" />
        <child id="1140524464360" name="cellLayout" index="2czzBx" />
        <child id="1140524464359" name="emptyCellModel" index="2czzBI" />
      </concept>
      <concept id="1078308402140" name="jetbrains.mps.lang.editor.structure.CellModel_Custom" flags="sg" stub="8104358048506730068" index="gc7cB">
        <child id="1176795024817" name="cellProvider" index="3YsKMw" />
      </concept>
      <concept id="1106270549637" name="jetbrains.mps.lang.editor.structure.CellLayout_Horizontal" flags="nn" index="2iRfu4" />
      <concept id="1106270571710" name="jetbrains.mps.lang.editor.structure.CellLayout_Vertical" flags="nn" index="2iRkQZ" />
      <concept id="1237303669825" name="jetbrains.mps.lang.editor.structure.CellLayout_Indent" flags="nn" index="l2Vlx" />
      <concept id="1237308012275" name="jetbrains.mps.lang.editor.structure.IndentLayoutNewLineStyleClassItem" flags="ln" index="ljvvj" />
      <concept id="1142886221719" name="jetbrains.mps.lang.editor.structure.QueryFunction_NodeCondition" flags="in" index="pkWqt" />
      <concept id="1142886811589" name="jetbrains.mps.lang.editor.structure.ConceptFunctionParameter_node" flags="nn" index="pncrf" />
      <concept id="1080736578640" name="jetbrains.mps.lang.editor.structure.BaseEditorComponent" flags="ig" index="2wURMF">
        <child id="1080736633877" name="cellModel" index="2wV5jI" />
      </concept>
      <concept id="1149850725784" name="jetbrains.mps.lang.editor.structure.CellModel_AttributedNodeCell" flags="ng" index="2SsqMj" />
      <concept id="1186414536763" name="jetbrains.mps.lang.editor.structure.BooleanStyleSheetItem" flags="ln" index="VOi$J">
        <property id="1186414551515" name="flag" index="VOm3f" />
      </concept>
      <concept id="1186414928363" name="jetbrains.mps.lang.editor.structure.SelectableStyleSheetItem" flags="ln" index="VPM3Z" />
      <concept id="1233758997495" name="jetbrains.mps.lang.editor.structure.PunctuationLeftStyleClassItem" flags="ln" index="11L4FC" />
      <concept id="1233759184865" name="jetbrains.mps.lang.editor.structure.PunctuationRightStyleClassItem" flags="ln" index="11LMrY" />
      <concept id="1088013125922" name="jetbrains.mps.lang.editor.structure.CellModel_RefCell" flags="sg" stub="730538219795941030" index="1iCGBv">
        <child id="1088186146602" name="editorComponent" index="1sWHZn" />
      </concept>
      <concept id="1088185857835" name="jetbrains.mps.lang.editor.structure.InlineEditorComponent" flags="ig" index="1sVBvm" />
      <concept id="1139848536355" name="jetbrains.mps.lang.editor.structure.CellModel_WithRole" flags="ng" index="1$h60E">
        <property id="1140017977771" name="readOnly" index="1Intyy" />
        <reference id="1140103550593" name="relationDeclaration" index="1NtTu8" />
      </concept>
      <concept id="1073389214265" name="jetbrains.mps.lang.editor.structure.EditorCellModel" flags="ng" index="3EYTF0">
        <property id="1130859485024" name="attractsFocus" index="1cu_pB" />
        <child id="1142887637401" name="renderingCondition" index="pqm2j" />
      </concept>
      <concept id="1073389446423" name="jetbrains.mps.lang.editor.structure.CellModel_Collection" flags="sn" stub="3013115976261988961" index="3EZMnI">
        <child id="1106270802874" name="cellLayout" index="2iSdaV" />
        <child id="1073389446424" name="childCellModel" index="3EZMnx" />
      </concept>
      <concept id="1073389577006" name="jetbrains.mps.lang.editor.structure.CellModel_Constant" flags="sn" stub="3610246225209162225" index="3F0ifn">
        <property id="1073389577007" name="text" index="3F0ifm" />
      </concept>
      <concept id="1073389658414" name="jetbrains.mps.lang.editor.structure.CellModel_Property" flags="sg" stub="730538219796134133" index="3F0A7n" />
      <concept id="1219418625346" name="jetbrains.mps.lang.editor.structure.IStyleContainer" flags="ng" index="3F0Thp">
        <child id="1219418656006" name="styleItem" index="3F10Kt" />
      </concept>
      <concept id="1073389882823" name="jetbrains.mps.lang.editor.structure.CellModel_RefNode" flags="sg" stub="730538219795960754" index="3F1sOY" />
      <concept id="1073390211982" name="jetbrains.mps.lang.editor.structure.CellModel_RefNodeList" flags="sg" stub="2794558372793454595" index="3F2HdR" />
      <concept id="1225898583838" name="jetbrains.mps.lang.editor.structure.ReadOnlyModelAccessor" flags="ng" index="1HfYo3">
        <child id="1225898971709" name="getter" index="1Hhtcw" />
      </concept>
      <concept id="1225900081164" name="jetbrains.mps.lang.editor.structure.CellModel_ReadOnlyModelAccessor" flags="sg" stub="3708815482283559694" index="1HlG4h">
        <child id="1225900141900" name="modelAccessor" index="1HlULh" />
      </concept>
      <concept id="1176717841777" name="jetbrains.mps.lang.editor.structure.QueryFunction_ModelAccess_Getter" flags="in" index="3TQlhw" />
      <concept id="1176749715029" name="jetbrains.mps.lang.editor.structure.QueryFunction_CellProvider" flags="in" index="3VJUX4" />
      <concept id="1166049232041" name="jetbrains.mps.lang.editor.structure.AbstractComponent" flags="ng" index="1XWOmA">
        <reference id="1166049300910" name="conceptDeclaration" index="1XX52x" />
      </concept>
    </language>
    <language id="f3061a53-9226-4cc5-a443-f952ceaf5816" name="jetbrains.mps.baseLanguage">
      <concept id="1197027756228" name="jetbrains.mps.baseLanguage.structure.DotExpression" flags="nn" index="2OqwBi">
        <child id="1197027771414" name="operand" index="2Oq$k0" />
        <child id="1197027833540" name="operation" index="2OqNvi" />
      </concept>
      <concept id="1145552977093" name="jetbrains.mps.baseLanguage.structure.GenericNewExpression" flags="nn" index="2ShNRf">
        <child id="1145553007750" name="creator" index="2ShVmc" />
      </concept>
      <concept id="1137021947720" name="jetbrains.mps.baseLanguage.structure.ConceptFunction" flags="in" index="2VMwT0">
        <child id="1137022507850" name="body" index="2VODD2" />
      </concept>
      <concept id="1070475926800" name="jetbrains.mps.baseLanguage.structure.StringLiteral" flags="nn" index="Xl_RD">
        <property id="1070475926801" name="value" index="Xl_RC" />
      </concept>
      <concept id="1081236700937" name="jetbrains.mps.baseLanguage.structure.StaticMethodCall" flags="nn" index="2YIFZM">
        <reference id="1144433194310" name="classConcept" index="1Pybhc" />
      </concept>
      <concept id="1070533707846" name="jetbrains.mps.baseLanguage.structure.StaticFieldReference" flags="nn" index="10M0yZ">
        <reference id="1144433057691" name="classifier" index="1PxDUh" />
      </concept>
      <concept id="1068431474542" name="jetbrains.mps.baseLanguage.structure.VariableDeclaration" flags="ng" index="33uBYm">
        <child id="1068431790190" name="initializer" index="33vP2m" />
      </concept>
      <concept id="1068498886296" name="jetbrains.mps.baseLanguage.structure.VariableReference" flags="nn" index="37vLTw">
        <reference id="1068581517664" name="variableDeclaration" index="3cqZAo" />
      </concept>
      <concept id="4972933694980447171" name="jetbrains.mps.baseLanguage.structure.BaseVariableDeclaration" flags="ng" index="19Szcq">
        <child id="5680397130376446158" name="type" index="1tU5fm" />
      </concept>
      <concept id="1068580123155" name="jetbrains.mps.baseLanguage.structure.ExpressionStatement" flags="nn" index="3clFbF">
        <child id="1068580123156" name="expression" index="3clFbG" />
      </concept>
      <concept id="1068580123159" name="jetbrains.mps.baseLanguage.structure.IfStatement" flags="nn" index="3clFbJ">
        <child id="1068580123160" name="condition" index="3clFbw" />
        <child id="1068580123161" name="ifTrue" index="3clFbx" />
      </concept>
      <concept id="1068580123136" name="jetbrains.mps.baseLanguage.structure.StatementList" flags="sn" stub="5293379017992965193" index="3clFbS">
        <child id="1068581517665" name="statement" index="3cqZAp" />
      </concept>
      <concept id="1068580123137" name="jetbrains.mps.baseLanguage.structure.BooleanConstant" flags="nn" index="3clFbT">
        <property id="1068580123138" name="value" index="3clFbU" />
      </concept>
      <concept id="1068580320020" name="jetbrains.mps.baseLanguage.structure.IntegerConstant" flags="nn" index="3cmrfG">
        <property id="1068580320021" name="value" index="3cmrfH" />
      </concept>
      <concept id="1068581242878" name="jetbrains.mps.baseLanguage.structure.ReturnStatement" flags="nn" index="3cpWs6">
        <child id="1068581517676" name="expression" index="3cqZAk" />
      </concept>
      <concept id="1068581242864" name="jetbrains.mps.baseLanguage.structure.LocalVariableDeclarationStatement" flags="nn" index="3cpWs8">
        <child id="1068581242865" name="localVariableDeclaration" index="3cpWs9" />
      </concept>
      <concept id="1068581242863" name="jetbrains.mps.baseLanguage.structure.LocalVariableDeclaration" flags="nr" index="3cpWsn" />
      <concept id="1204053956946" name="jetbrains.mps.baseLanguage.structure.IMethodCall" flags="ng" index="1ndlxa">
        <reference id="1068499141037" name="baseMethodDeclaration" index="37wK5l" />
        <child id="1068499141038" name="actualArgument" index="37wK5m" />
      </concept>
      <concept id="1212685548494" name="jetbrains.mps.baseLanguage.structure.ClassCreator" flags="nn" index="1pGfFk" />
    </language>
    <language id="7866978e-a0f0-4cc7-81bc-4d213d9375e1" name="jetbrains.mps.lang.smodel">
      <concept id="1179409122411" name="jetbrains.mps.lang.smodel.structure.Node_ConceptMethodCall" flags="nn" index="2qgKlT" />
      <concept id="1138676077309" name="jetbrains.mps.lang.smodel.structure.EnumMemberReference" flags="nn" index="uoxfO">
        <reference id="1138676095763" name="enumMember" index="uo_Cq" />
      </concept>
      <concept id="1143234257716" name="jetbrains.mps.lang.smodel.structure.Node_GetModelOperation" flags="nn" index="I4A8Y" />
      <concept id="1146171026731" name="jetbrains.mps.lang.smodel.structure.Property_HasValue_Enum" flags="nn" index="3t7uKx">
        <child id="1146171026732" name="value" index="3t7uKA" />
      </concept>
      <concept id="1172008320231" name="jetbrains.mps.lang.smodel.structure.Node_IsNotNullOperation" flags="nn" index="3x8VRR" />
      <concept id="1140137987495" name="jetbrains.mps.lang.smodel.structure.SNodeTypeCastExpression" flags="nn" index="1PxgMI">
        <reference id="1140138128738" name="concept" index="1PxNhF" />
        <child id="1140138123956" name="leftExpression" index="1PxMeX" />
      </concept>
      <concept id="1138055754698" name="jetbrains.mps.lang.smodel.structure.SNodeType" flags="in" index="3Tqbb2">
        <reference id="1138405853777" name="concept" index="ehGHo" />
      </concept>
      <concept id="1138056022639" name="jetbrains.mps.lang.smodel.structure.SPropertyAccess" flags="nn" index="3TrcHB">
        <reference id="1138056395725" name="property" index="3TsBF5" />
      </concept>
      <concept id="1138056143562" name="jetbrains.mps.lang.smodel.structure.SLinkAccess" flags="nn" index="3TrEf2">
        <reference id="1138056516764" name="link" index="3Tt5mk" />
      </concept>
      <concept id="1172424058054" name="jetbrains.mps.lang.smodel.structure.ConceptRefExpression" flags="nn" index="3TUQnm">
        <reference id="1172424100906" name="conceptDeclaration" index="3TV0OU" />
      </concept>
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1133920641626" name="jetbrains.mps.lang.core.structure.BaseConcept" flags="ng" index="2VYdi">
        <property id="1193676396447" name="virtualPackage" index="3GE5qa" />
      </concept>
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
  </registry>
  <node concept="24kQdi" id="5zmpEki$CqM">
    <property role="3GE5qa" value="config" />
    <ref role="1XX52x" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
    <node concept="3EZMnI" id="5zmpEki$CqO" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEki$CqV" role="3EZMnx">
        <property role="3F0ifm" value="state-machine semantics" />
      </node>
      <node concept="gc7cB" id="5zmpEki$Cr1" role="3EZMnx">
        <node concept="3VJUX4" id="5zmpEki$Cr3" role="3YsKMw">
          <node concept="3clFbS" id="5zmpEki$Cr5" role="2VODD2">
            <node concept="3clFbF" id="5zmpEki$CQf" role="3cqZAp">
              <node concept="2ShNRf" id="5zmpEki$CQd" role="3clFbG">
                <node concept="1pGfFk" id="5zmpEki$Fjb" role="2ShVmc">
                  <ref role="37wK5l" to="r4b4:6Ce4x7KQbw2" resolve="ColoredVerticalBarCell" />
                  <node concept="pncrf" id="5zmpEki$JtQ" role="37wK5m" />
                  <node concept="10M0yZ" id="5zmpEki$Jwg" role="37wK5m">
                    <ref role="1PxDUh" to="z60i:~Color" resolve="Color" />
                    <ref role="3cqZAo" to="z60i:~Color.gray" resolve="gray" />
                  </node>
                  <node concept="3cmrfG" id="5zmpEki$J_A" role="37wK5m">
                    <property role="3cmrfH" value="0" />
                  </node>
                  <node concept="3cmrfG" id="5zmpEki$JCd" role="37wK5m">
                    <property role="3cmrfH" value="2" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3EZMnI" id="5zmpEki$JFB" role="3EZMnx">
        <node concept="VPM3Z" id="5zmpEki$JFD" role="3F10Kt">
          <property role="VOm3f" value="false" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JGZ" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JH1" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JHb" role="3EZMnx">
            <property role="3F0ifm" value="Big-Step Maximality" />
          </node>
          <node concept="3F0A7n" id="5zmpEkiB9S_" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omb" resolve="bigStepMaximality" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JH4" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JH_" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JHB" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JHD" role="3EZMnx">
            <property role="3F0ifm" value="Concurrency" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JHZ" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omd" resolve="concurrency" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JHE" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JIh" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JIj" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JIl" role="3EZMnx">
            <property role="3F0ifm" value="Preemption" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JIF" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omI" resolve="preemption" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JIm" role="2iSdaV" />
          <node concept="pkWqt" id="5zmpEki$Lai" role="pqm2j">
            <node concept="3clFbS" id="5zmpEki$Laj" role="2VODD2">
              <node concept="3clFbF" id="5zmpEki$LaV" role="3cqZAp">
                <node concept="2OqwBi" id="5zmpEki$LDg" role="3clFbG">
                  <node concept="2OqwBi" id="5zmpEki$Leq" role="2Oq$k0">
                    <node concept="pncrf" id="5zmpEki$LaU" role="2Oq$k0" />
                    <node concept="3TrcHB" id="5zmpEki$LqU" role="2OqNvi">
                      <ref role="3TsBF5" to="pz83:5zmpEki$omd" resolve="concurrency" />
                    </node>
                  </node>
                  <node concept="3t7uKx" id="5zmpEki$LLs" role="2OqNvi">
                    <node concept="uoxfO" id="5zmpEki$LLu" role="3t7uKA">
                      <ref role="uo_Cq" to="pz83:5zmpEki$okY" />
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3EZMnI" id="5zmpEki$JJa" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JJc" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JJe" role="3EZMnx">
            <property role="3F0ifm" value="Small-Step Consistency" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JJI" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$ono" resolve="smallStepConsistency" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JJf" role="2iSdaV" />
          <node concept="pkWqt" id="5zmpEki$LRZ" role="pqm2j">
            <node concept="3clFbS" id="5zmpEki$LS0" role="2VODD2">
              <node concept="3clFbF" id="5zmpEki$LTN" role="3cqZAp">
                <node concept="2OqwBi" id="5zmpEki$MoU" role="3clFbG">
                  <node concept="2OqwBi" id="5zmpEki$LXi" role="2Oq$k0">
                    <node concept="pncrf" id="5zmpEki$LTM" role="2Oq$k0" />
                    <node concept="3TrcHB" id="5zmpEki$MaU" role="2OqNvi">
                      <ref role="3TsBF5" to="pz83:5zmpEki$omd" resolve="concurrency" />
                    </node>
                  </node>
                  <node concept="3t7uKx" id="5zmpEki$Mx6" role="2OqNvi">
                    <node concept="uoxfO" id="5zmpEki$Mx8" role="3t7uKA">
                      <ref role="uo_Cq" to="pz83:5zmpEki$okY" />
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3EZMnI" id="5zmpEki$JKa" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JKc" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JKe" role="3EZMnx">
            <property role="3F0ifm" value="External Input Event" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JKN" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omg" resolve="externalInEvent" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JKf" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JLk" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JLm" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JLo" role="3EZMnx">
            <property role="3F0ifm" value="Input Event Lifeline" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JM2" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omk" resolve="inEventLifeline" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JLp" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JMC" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JME" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JMG" role="3EZMnx">
            <property role="3F0ifm" value="Internal Event Lifeline" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JNr" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omp" resolve="internalEventLifeline" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JMH" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JO6" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JO8" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JOa" role="3EZMnx">
            <property role="3F0ifm" value="External Output Event" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JOY" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omv" resolve="externalOutEvent" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JOb" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JPI" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JPK" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JPM" role="3EZMnx">
            <property role="3F0ifm" value="Output Event Lifeline" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JQF" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omA" resolve="outEventLifeline" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JPN" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JRw" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JRy" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JR$" role="3EZMnx">
            <property role="3F0ifm" value="Guard Condition Memory Protocol" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JSy" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$on_" resolve="GC" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JR_" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JTs" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JTu" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JTw" role="3EZMnx">
            <property role="3F0ifm" value="Right-Hand-Side Memory Protocol" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JUz" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$onN" resolve="RHS" />
          </node>
          <node concept="2iRfu4" id="5zmpEki$JTx" role="2iSdaV" />
        </node>
        <node concept="3EZMnI" id="5zmpEki$JVy" role="3EZMnx">
          <node concept="VPM3Z" id="5zmpEki$JV$" role="3F10Kt">
            <property role="VOm3f" value="false" />
          </node>
          <node concept="3F0ifn" id="5zmpEki$JVA" role="3EZMnx">
            <property role="3F0ifm" value="Priority" />
          </node>
          <node concept="3F0A7n" id="5zmpEki$JWI" role="3EZMnx">
            <ref role="1NtTu8" to="pz83:5zmpEki$omR" resolve="priority" />
          </node>
          <node concept="3EZMnI" id="5zmpEki$JWS" role="3EZMnx">
            <node concept="3F0ifn" id="5zmpEki$JXC" role="3EZMnx">
              <property role="3F0ifm" value=":" />
            </node>
            <node concept="VPM3Z" id="5zmpEki$JWU" role="3F10Kt">
              <property role="VOm3f" value="false" />
            </node>
            <node concept="3F0A7n" id="5zmpEki$JXa" role="3EZMnx">
              <ref role="1NtTu8" to="pz83:5zmpEki$on1" resolve="heirPrioRegion" />
            </node>
            <node concept="3F0ifn" id="5zmpEki$JXi" role="3EZMnx">
              <property role="3F0ifm" value="-" />
            </node>
            <node concept="3F0A7n" id="5zmpEki$JXs" role="3EZMnx">
              <ref role="1NtTu8" to="pz83:5zmpEki$onc" resolve="heirPrioScheme" />
            </node>
            <node concept="2iRfu4" id="5zmpEki$JWX" role="2iSdaV" />
            <node concept="pkWqt" id="5zmpEki$JXJ" role="pqm2j">
              <node concept="3clFbS" id="5zmpEki$JXK" role="2VODD2">
                <node concept="3clFbF" id="5zmpEki$JYo" role="3cqZAp">
                  <node concept="2OqwBi" id="5zmpEki$KXL" role="3clFbG">
                    <node concept="2OqwBi" id="5zmpEki$KmH" role="2Oq$k0">
                      <node concept="pncrf" id="5zmpEki$JYn" role="2Oq$k0" />
                      <node concept="3TrcHB" id="5zmpEki$Kzd" role="2OqNvi">
                        <ref role="3TsBF5" to="pz83:5zmpEki$omR" resolve="priority" />
                      </node>
                    </node>
                    <node concept="3t7uKx" id="5zmpEki$L5X" role="2OqNvi">
                      <node concept="uoxfO" id="5zmpEki$L5Z" role="3t7uKA">
                        <ref role="uo_Cq" to="pz83:5zmpEki$om3" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2iRfu4" id="5zmpEki$JVB" role="2iSdaV" />
        </node>
        <node concept="2iRkQZ" id="5zmpEki$JFG" role="2iSdaV" />
      </node>
      <node concept="2iRfu4" id="5zmpEki$CqR" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_6yE">
    <property role="3GE5qa" value="types" />
    <ref role="1XX52x" to="pz83:5zmpEki_6xV" resolve="SMType" />
    <node concept="3EZMnI" id="5zmpEki_6yG" role="2wV5jI">
      <node concept="1iCGBv" id="5zmpEki_6yN" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_6xW" />
        <node concept="1sVBvm" id="5zmpEki_6yP" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEki_82m" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEki_6yJ" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_nj3">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6xY" resolve="SMGlobalDeclaration" />
    <node concept="3EZMnI" id="5zmpEki_nj5" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEki_njc" role="3EZMnx">
        <property role="3F0ifm" value="statemachine" />
      </node>
      <node concept="3F0A7n" id="5zmpEki_nji" role="3EZMnx">
        <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
      </node>
      <node concept="3F1sOY" id="5zmpEki_njq" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_aHv" />
      </node>
      <node concept="l2Vlx" id="5zmpEki_nj8" role="2iSdaV" />
      <node concept="3F0ifn" id="5zmpEkiCEhr" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="5zmpEkiCEj9" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="5zmpEkiCEkQ" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_ouJ">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y1" resolve="EntryBlock" />
    <node concept="3EZMnI" id="5zmpEki_ouL" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEki_ouS" role="3EZMnx">
        <property role="3F0ifm" value="entry" />
      </node>
      <node concept="3F1sOY" id="5zmpEki_ouY" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_njC" />
      </node>
      <node concept="l2Vlx" id="5zmpEki_ouO" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_y4A">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y2" resolve="Event" />
    <node concept="3EZMnI" id="5zmpEki_y4F" role="2wV5jI">
      <property role="1cu_pB" value="2" />
      <node concept="3F0ifn" id="5zmpEki_y4M" role="3EZMnx">
        <property role="3F0ifm" value="rendezvous" />
        <node concept="pkWqt" id="5zmpEki_y4P" role="pqm2j">
          <node concept="3clFbS" id="5zmpEki_y4Q" role="2VODD2">
            <node concept="3cpWs8" id="5zmpEki_y5t" role="3cqZAp">
              <node concept="3cpWsn" id="5zmpEki_y5w" role="3cpWs9">
                <property role="TrG5h" value="config" />
                <node concept="3Tqbb2" id="5zmpEki_y5s" role="1tU5fm">
                  <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                </node>
                <node concept="1PxgMI" id="5zmpEki_zGG" role="33vP2m">
                  <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  <node concept="2OqwBi" id="5zmpEki_z2i" role="1PxMeX">
                    <node concept="2YIFZM" id="5zmpEki_yno" role="2Oq$k0">
                      <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                      <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                      <node concept="2OqwBi" id="5zmpEki_yzW" role="37wK5m">
                        <node concept="pncrf" id="5zmpEki_yqv" role="2Oq$k0" />
                        <node concept="I4A8Y" id="5zmpEki_yUq" role="2OqNvi" />
                      </node>
                    </node>
                    <node concept="2qgKlT" id="5zmpEki_znb" role="2OqNvi">
                      <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                      <node concept="3TUQnm" id="5zmpEkiBPTp" role="37wK5m">
                        <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
            <node concept="3clFbJ" id="5zmpEki_zYO" role="3cqZAp">
              <node concept="3clFbS" id="5zmpEki_zYQ" role="3clFbx">
                <node concept="3cpWs6" id="5zmpEki__2s" role="3cqZAp">
                  <node concept="2OqwBi" id="5zmpEki__eE" role="3cqZAk">
                    <node concept="pncrf" id="5zmpEki__4z" role="2Oq$k0" />
                    <node concept="3TrcHB" id="5zmpEki__TL" role="2OqNvi">
                      <ref role="3TsBF5" to="pz83:5zmpEki_r4z" resolve="rendezvous" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="2OqwBi" id="5zmpEki_$GA" role="3clFbw">
                <node concept="2OqwBi" id="5zmpEki_$9a" role="2Oq$k0">
                  <node concept="37vLTw" id="5zmpEki_$4y" role="2Oq$k0">
                    <ref role="3cqZAo" node="5zmpEki_y5w" resolve="config" />
                  </node>
                  <node concept="3TrcHB" id="5zmpEki_$qq" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki$omd" resolve="concurrency" />
                  </node>
                </node>
                <node concept="3t7uKx" id="5zmpEki_$Q2" role="2OqNvi">
                  <node concept="uoxfO" id="5zmpEki_$Q4" role="3t7uKA">
                    <ref role="uo_Cq" to="pz83:5zmpEki$okY" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="3cpWs6" id="5zmpEki_A2F" role="3cqZAp">
              <node concept="3clFbT" id="5zmpEki_A7w" role="3cqZAk">
                <property role="3clFbU" value="false" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEki_AkT" role="3EZMnx">
        <property role="3F0ifm" value="in" />
        <node concept="pkWqt" id="4CfWYHsfsxq" role="pqm2j">
          <node concept="3clFbS" id="4CfWYHsfsxr" role="2VODD2">
            <node concept="3cpWs8" id="4CfWYHsfsGA" role="3cqZAp">
              <node concept="3cpWsn" id="4CfWYHsfsGB" role="3cpWs9">
                <property role="TrG5h" value="config" />
                <node concept="3Tqbb2" id="4CfWYHsfsGC" role="1tU5fm">
                  <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                </node>
                <node concept="1PxgMI" id="4CfWYHsfsGD" role="33vP2m">
                  <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  <node concept="2OqwBi" id="4CfWYHsfsGE" role="1PxMeX">
                    <node concept="2YIFZM" id="4CfWYHsfsGF" role="2Oq$k0">
                      <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                      <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                      <node concept="2OqwBi" id="4CfWYHsfsGG" role="37wK5m">
                        <node concept="pncrf" id="4CfWYHsfsGH" role="2Oq$k0" />
                        <node concept="I4A8Y" id="4CfWYHsfsGI" role="2OqNvi" />
                      </node>
                    </node>
                    <node concept="2qgKlT" id="4CfWYHsfsGJ" role="2OqNvi">
                      <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                      <node concept="3TUQnm" id="4CfWYHsfsGK" role="37wK5m">
                        <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
            <node concept="3clFbJ" id="4CfWYHsfsGL" role="3cqZAp">
              <node concept="3clFbS" id="4CfWYHsfsGM" role="3clFbx">
                <node concept="3cpWs6" id="4CfWYHsfsGN" role="3cqZAp">
                  <node concept="2OqwBi" id="4CfWYHsfsGO" role="3cqZAk">
                    <node concept="pncrf" id="4CfWYHsfsGP" role="2Oq$k0" />
                    <node concept="3TrcHB" id="4CfWYHsftw1" role="2OqNvi">
                      <ref role="3TsBF5" to="pz83:5zmpEki_r4x" resolve="in_event" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="2OqwBi" id="4CfWYHsfsGR" role="3clFbw">
                <node concept="2OqwBi" id="4CfWYHsfsGS" role="2Oq$k0">
                  <node concept="37vLTw" id="4CfWYHsfsGT" role="2Oq$k0">
                    <ref role="3cqZAo" node="4CfWYHsfsGB" resolve="config" />
                  </node>
                  <node concept="3TrcHB" id="4CfWYHsfsVE" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki$omg" resolve="externalInEvent" />
                  </node>
                </node>
                <node concept="3t7uKx" id="4CfWYHsfsGV" role="2OqNvi">
                  <node concept="uoxfO" id="4CfWYHsfsGW" role="3t7uKA">
                    <ref role="uo_Cq" to="pz83:5zmpEki$olK" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="3cpWs6" id="4CfWYHsfsGX" role="3cqZAp">
              <node concept="3clFbT" id="4CfWYHsfsGY" role="3cqZAk">
                <property role="3clFbU" value="false" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEki_Aqj" role="3EZMnx">
        <property role="3F0ifm" value="event" />
      </node>
      <node concept="3F0A7n" id="5zmpEki_AES" role="3EZMnx">
        <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
      </node>
      <node concept="3F0ifn" id="5zmpEki_ASK" role="3EZMnx">
        <property role="3F0ifm" value="(" />
        <node concept="11L4FC" id="5zmpEki_B1l" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="11LMrY" id="5zmpEki_B2h" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="VPM3Z" id="5zmpEki_B46" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEki_y4I" role="2iSdaV" />
      <node concept="3F2HdR" id="5zmpEki_Bbf" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_r4C" />
        <node concept="l2Vlx" id="5zmpEki_Bbh" role="2czzBx" />
        <node concept="1HlG4h" id="5zmpEki_Bii" role="2czzBI">
          <node concept="1HfYo3" id="5zmpEki_Bij" role="1HlULh">
            <node concept="3TQlhw" id="5zmpEki_Bik" role="1Hhtcw">
              <node concept="3clFbS" id="5zmpEki_Bil" role="2VODD2">
                <node concept="3clFbF" id="5zmpEki_Bjz" role="3cqZAp">
                  <node concept="Xl_RD" id="5zmpEki_Bjy" role="3clFbG">
                    <property role="Xl_RC" value="" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEki_BnO" role="3EZMnx">
        <property role="3F0ifm" value=")" />
        <node concept="11L4FC" id="5zmpEki_Bxv" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEki_BJX" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_r4E" />
        <node concept="pkWqt" id="5zmpEki_BRb" role="pqm2j">
          <node concept="3clFbS" id="5zmpEki_BRc" role="2VODD2">
            <node concept="3clFbF" id="5zmpEki_BSh" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEki_CGW" role="3clFbG">
                <node concept="2OqwBi" id="5zmpEki_C10" role="2Oq$k0">
                  <node concept="pncrf" id="5zmpEki_BSg" role="2Oq$k0" />
                  <node concept="2qgKlT" id="5zmpEki_CB8" role="2OqNvi">
                    <ref role="37wK5l" to="gogl:5zmpEki_836" resolve="binding" />
                  </node>
                </node>
                <node concept="3x8VRR" id="5zmpEki_CQQ" role="2OqNvi" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiE7Ui" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="5zmpEkiE85D" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="5zmpEkiE87m" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_D0e">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y3" resolve="EventArgRef" />
    <node concept="1iCGBv" id="5zmpEki_D0j" role="2wV5jI">
      <ref role="1NtTu8" to="x27k:1OcdQnyTX2V" />
      <node concept="1sVBvm" id="5zmpEki_D0l" role="1sWHZn">
        <node concept="3F0A7n" id="5zmpEki_D0s" role="2wV5jI">
          <property role="1Intyy" value="true" />
          <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_TP4">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y4" resolve="EventCall" />
    <node concept="3EZMnI" id="5zmpEki_TP6" role="2wV5jI">
      <node concept="1iCGBv" id="5zmpEki_TPg" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_D0z" />
        <node concept="1sVBvm" id="5zmpEki_TPi" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEki_TPs" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEki_TP$" role="3EZMnx">
        <property role="3F0ifm" value="(" />
        <node concept="11L4FC" id="5zmpEki_TRi" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="11LMrY" id="5zmpEki_TSZ" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEki_TP9" role="2iSdaV" />
      <node concept="3F2HdR" id="5zmpEki_TTk" role="3EZMnx">
        <property role="1cu_pB" value="2" />
        <property role="2czwfO" value="," />
        <ref role="1NtTu8" to="pz83:5zmpEki_D0x" />
        <node concept="l2Vlx" id="5zmpEki_TTm" role="2czzBx" />
        <node concept="1HlG4h" id="5zmpEki_TTv" role="2czzBI">
          <node concept="1HfYo3" id="5zmpEki_TTw" role="1HlULh">
            <node concept="3TQlhw" id="5zmpEki_TTx" role="1Hhtcw">
              <node concept="3clFbS" id="5zmpEki_TTy" role="2VODD2">
                <node concept="3clFbF" id="5zmpEki_TUK" role="3cqZAp">
                  <node concept="Xl_RD" id="5zmpEki_TUJ" role="3clFbG">
                    <property role="Xl_RC" value="" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEki_TWp" role="3EZMnx">
        <property role="3F0ifm" value=");" />
        <node concept="11L4FC" id="5zmpEki_TYi" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEki_TYG">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
    <node concept="3EZMnI" id="5zmpEki_TYL" role="2wV5jI">
      <property role="1cu_pB" value="2" />
      <node concept="3EZMnI" id="5zmpEki_TYS" role="3EZMnx">
        <node concept="VPM3Z" id="5zmpEki_TYU" role="3F10Kt">
          <property role="VOm3f" value="false" />
        </node>
        <node concept="3F0ifn" id="5zmpEki_TYW" role="3EZMnx">
          <property role="3F0ifm" value="(priority=" />
          <node concept="11LMrY" id="5zmpEki_U06" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
        </node>
        <node concept="3F0A7n" id="5zmpEki_TZ5" role="3EZMnx">
          <ref role="1NtTu8" to="pz83:5zmpEki_TOE" resolve="prio" />
        </node>
        <node concept="3F0ifn" id="5zmpEki_TZd" role="3EZMnx">
          <property role="3F0ifm" value=")" />
          <node concept="11L4FC" id="5zmpEki_U1K" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
        </node>
        <node concept="2iRfu4" id="5zmpEki_TYX" role="2iSdaV" />
        <node concept="pkWqt" id="5zmpEkiDR8K" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiDR8L" role="2VODD2">
            <node concept="3cpWs8" id="5zmpEkiBN4q" role="3cqZAp">
              <node concept="3cpWsn" id="5zmpEkiDRaC" role="3cpWs9">
                <property role="TrG5h" value="config" />
                <node concept="3Tqbb2" id="5zmpEkiDRaD" role="1tU5fm">
                  <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                </node>
                <node concept="1PxgMI" id="5zmpEkiDRaE" role="33vP2m">
                  <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  <node concept="2OqwBi" id="5zmpEkiDRaF" role="1PxMeX">
                    <node concept="2YIFZM" id="5zmpEkiDRaG" role="2Oq$k0">
                      <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                      <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                      <node concept="2OqwBi" id="5zmpEkiDRaH" role="37wK5m">
                        <node concept="pncrf" id="5zmpEkiDRwL" role="2Oq$k0" />
                        <node concept="I4A8Y" id="5zmpEkiDRaI" role="2OqNvi" />
                      </node>
                    </node>
                    <node concept="2qgKlT" id="5zmpEkiDRaJ" role="2OqNvi">
                      <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                      <node concept="3TUQnm" id="5zmpEkiBPMs" role="37wK5m">
                        <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
            <node concept="3clFbF" id="5zmpEkiBNFv" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEkiBOgc" role="3clFbG">
                <node concept="2OqwBi" id="5zmpEkiBNKg" role="2Oq$k0">
                  <node concept="37vLTw" id="5zmpEkiBNFt" role="2Oq$k0">
                    <ref role="3cqZAo" node="5zmpEkiDRaC" resolve="config" />
                  </node>
                  <node concept="3TrcHB" id="5zmpEkiBNYP" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki$omR" resolve="priority" />
                  </node>
                </node>
                <node concept="3t7uKx" id="5zmpEkiBOog" role="2OqNvi">
                  <node concept="uoxfO" id="5zmpEkiBOoi" role="3t7uKA">
                    <ref role="uo_Cq" to="pz83:5zmpEki$om4" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="2SsqMj" id="5zmpEki_U1W" role="3EZMnx" />
      <node concept="2iRfu4" id="5zmpEki_TYO" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAg23">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y6" resolve="RegionLocalDeclaration" />
    <node concept="3EZMnI" id="5zmpEkiAg25" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAg2c" role="3EZMnx">
        <property role="3F0ifm" value="region" />
      </node>
      <node concept="3F0A7n" id="5zmpEkiAg2i" role="3EZMnx">
        <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiAg2w" role="3EZMnx">
        <property role="3F0ifm" value="initial = " />
      </node>
      <node concept="1iCGBv" id="5zmpEkiAg2E" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiA3uD" />
        <node concept="1sVBvm" id="5zmpEkiAg2G" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAg2Q" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEkiAg31" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiA3uB" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiDwX1" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="5zmpEkiDwYN" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="5zmpEkiDx0w" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAg28" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAg3L">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y8" resolve="SMFunctionAttribute" />
    <node concept="3EZMnI" id="5zmpEkiAg3N" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAg3U" role="3EZMnx">
        <property role="3F0ifm" value="state-machine function:" />
      </node>
      <node concept="2SsqMj" id="5zmpEkiAg4h" role="3EZMnx" />
      <node concept="2iRkQZ" id="5zmpEkiAg3Q" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAhfh">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y9" resolve="StartBigStepBlock" />
    <node concept="3EZMnI" id="5zmpEkiAhfj" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAhfq" role="3EZMnx">
        <property role="3F0ifm" value="big-step start" />
      </node>
      <node concept="3F1sOY" id="5zmpEkiAhfw" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_njC" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiC$kg" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="5zmpEkiC$lX" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="5zmpEkiC$nE" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAhfm" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAruq">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6ya" resolve="StateLocalDeclaration" />
    <node concept="3EZMnI" id="5zmpEkiArus" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAruz" role="3EZMnx">
        <property role="3F0ifm" value="(stable)" />
        <node concept="pkWqt" id="5zmpEkiArvc" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiArvd" role="2VODD2">
            <node concept="3cpWs8" id="5zmpEkiArHL" role="3cqZAp">
              <node concept="3cpWsn" id="5zmpEkiArHM" role="3cpWs9">
                <property role="TrG5h" value="config" />
                <node concept="3Tqbb2" id="5zmpEkiArHN" role="1tU5fm">
                  <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                </node>
                <node concept="1PxgMI" id="5zmpEkiArHO" role="33vP2m">
                  <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  <node concept="2OqwBi" id="5zmpEkiArHP" role="1PxMeX">
                    <node concept="2YIFZM" id="5zmpEkiArHQ" role="2Oq$k0">
                      <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                      <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                      <node concept="2OqwBi" id="5zmpEkiArHR" role="37wK5m">
                        <node concept="pncrf" id="5zmpEkiArHS" role="2Oq$k0" />
                        <node concept="I4A8Y" id="5zmpEkiArHT" role="2OqNvi" />
                      </node>
                    </node>
                    <node concept="2qgKlT" id="5zmpEkiArHU" role="2OqNvi">
                      <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                      <node concept="3TUQnm" id="5zmpEkiBQih" role="37wK5m">
                        <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
            <node concept="3clFbJ" id="5zmpEkiArHW" role="3cqZAp">
              <node concept="3clFbS" id="5zmpEkiArHX" role="3clFbx">
                <node concept="3cpWs6" id="5zmpEkiArHY" role="3cqZAp">
                  <node concept="2OqwBi" id="5zmpEkiArHZ" role="3cqZAk">
                    <node concept="pncrf" id="5zmpEkiArI0" role="2Oq$k0" />
                    <node concept="3TrcHB" id="5zmpEkiAsXi" role="2OqNvi">
                      <ref role="3TsBF5" to="pz83:5zmpEkiAhfQ" resolve="stable" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="2OqwBi" id="5zmpEkiArI2" role="3clFbw">
                <node concept="2OqwBi" id="5zmpEkiArI3" role="2Oq$k0">
                  <node concept="37vLTw" id="5zmpEkiArI4" role="2Oq$k0">
                    <ref role="3cqZAo" node="5zmpEkiArHM" resolve="config" />
                  </node>
                  <node concept="3TrcHB" id="5zmpEkiAs3a" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki$omb" resolve="bigStepMaximality" />
                  </node>
                </node>
                <node concept="3t7uKx" id="5zmpEkiArI6" role="2OqNvi">
                  <node concept="uoxfO" id="5zmpEkiArI7" role="3t7uKA">
                    <ref role="uo_Cq" to="pz83:5zmpEki$olb" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="3cpWs6" id="5zmpEkiArI8" role="3cqZAp">
              <node concept="3clFbT" id="5zmpEkiArI9" role="3cqZAk">
                <property role="3clFbU" value="false" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiAruD" role="3EZMnx">
        <property role="3F0ifm" value="state" />
      </node>
      <node concept="3F0A7n" id="5zmpEkiAruQ" role="3EZMnx">
        <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
      </node>
      <node concept="l2Vlx" id="5zmpEkiAruv" role="2iSdaV" />
      <node concept="3F1sOY" id="5zmpEkiArv6" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAhfS" />
      </node>
      <node concept="3F0ifn" id="4CfWYHsgiPR" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="4CfWYHsgiZP" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="4CfWYHsgj1y" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAziq">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yb" resolve="Transition" />
    <node concept="3EZMnI" id="5zmpEkiAzis" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAziz" role="3EZMnx">
        <property role="3F0ifm" value="transition" />
      </node>
      <node concept="3F0A7n" id="5zmpEkiAziD" role="3EZMnx">
        <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiAziL" role="3EZMnx">
        <property role="3F0ifm" value=":" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiAziV" role="3EZMnx">
        <property role="3F0ifm" value="on" />
      </node>
      <node concept="3F2HdR" id="5zmpEkiAzje" role="3EZMnx">
        <property role="2czwfO" value=" ^" />
        <ref role="1NtTu8" to="pz83:5zmpEkiAt6f" />
        <node concept="l2Vlx" id="5zmpEkiAzjg" role="2czzBx" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiAzjv" role="3EZMnx">
        <property role="3F0ifm" value="[" />
        <node concept="11L4FC" id="5zmpEkiAzmc" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="11LMrY" id="5zmpEkiAznT" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEkiAzjL" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAt6a" />
      </node>
      <node concept="3F0ifn" id="4CfWYHsguge" role="3EZMnx">
        <property role="3F0ifm" value="]" />
        <node concept="11L4FC" id="4CfWYHsgumQ" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="1iCGBv" id="5zmpEkiAzr_" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAt6j" />
        <node concept="1sVBvm" id="5zmpEkiAzrB" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAzrV" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiAzsg" role="3EZMnx">
        <property role="3F0ifm" value="-&gt;" />
      </node>
      <node concept="1iCGBv" id="5zmpEkiAzta" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAt6o" />
        <node concept="1sVBvm" id="5zmpEkiAztc" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAztB" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEkiAzun" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAt6c" />
        <node concept="pkWqt" id="5zmpEkiAzuI" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiAzuJ" role="2VODD2">
            <node concept="3clFbF" id="5zmpEkiAzvO" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEkiA$1v" role="3clFbG">
                <node concept="2OqwBi" id="5zmpEkiAzC7" role="2Oq$k0">
                  <node concept="pncrf" id="5zmpEkiAzvN" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiAzUl" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiAt6c" />
                  </node>
                </node>
                <node concept="3x8VRR" id="5zmpEkiA$xX" role="2OqNvi" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiAzk5" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="ljvvj" id="4CfWYHsgy2$" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="11L4FC" id="5zmpEkiAzp_" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAziv" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiA$Nw">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yc" resolve="TriggerEventRef" />
    <node concept="3EZMnI" id="5zmpEkiA$Ny" role="2wV5jI">
      <node concept="l2Vlx" id="5zmpEkiA$N_" role="2iSdaV" />
      <node concept="3F0ifn" id="5zmpEkiA$NR" role="3EZMnx">
        <property role="3F0ifm" value="¬" />
        <node concept="pkWqt" id="5zmpEkiA$NX" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiA$NY" role="2VODD2">
            <node concept="3clFbF" id="5zmpEkiA$P3" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEkiA$S6" role="3clFbG">
                <node concept="pncrf" id="5zmpEkiA$P2" role="2Oq$k0" />
                <node concept="3TrcHB" id="5zmpEkiA$XK" role="2OqNvi">
                  <ref role="3TsBF5" to="pz83:5zmpEkiA$Bv" resolve="negation" />
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="11LMrY" id="4CfWYHsgqxY" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="1iCGBv" id="5zmpEkiA_2E" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiA$Bx" />
        <node concept="1sVBvm" id="5zmpEkiA_2G" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiA_4G" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAHGu">
    <property role="3GE5qa" value="engine" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yd" resolve="CFunctionBinding" />
    <node concept="3EZMnI" id="5zmpEkiAHGw" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAHGB" role="3EZMnx">
        <property role="3F0ifm" value="=&gt;" />
      </node>
      <node concept="1iCGBv" id="5zmpEkiAHGH" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAHG4" />
        <node concept="1sVBvm" id="5zmpEkiAHGJ" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAHGU" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAHGz" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAX9R">
    <property role="3GE5qa" value="engine" />
    <ref role="1XX52x" to="pz83:5zmpEki_6ye" resolve="SMGenEvent" />
    <node concept="3EZMnI" id="5zmpEkiAX9T" role="2wV5jI">
      <node concept="1iCGBv" id="5zmpEkiAXa3" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAHH8" />
        <node concept="1sVBvm" id="5zmpEkiAXa5" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAXaf" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3EZMnI" id="5zmpEkiAXan" role="3EZMnx">
        <property role="1cu_pB" value="0" />
        <node concept="3F0ifn" id="4CfWYHsh22h" role="3EZMnx">
          <property role="3F0ifm" value="(" />
          <node concept="11L4FC" id="4CfWYHsh27f" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
          <node concept="11LMrY" id="4CfWYHsh28W" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
        </node>
        <node concept="VPM3Z" id="5zmpEkiAXap" role="3F10Kt">
          <property role="VOm3f" value="false" />
        </node>
        <node concept="3F2HdR" id="5zmpEkiAXa_" role="3EZMnx">
          <property role="1cu_pB" value="2" />
          <property role="2czwfO" value="," />
          <ref role="1NtTu8" to="pz83:5zmpEkiAHH6" />
          <node concept="l2Vlx" id="5zmpEkiAXaB" role="2czzBx" />
          <node concept="1HlG4h" id="5zmpEkiAXaE" role="2czzBI">
            <node concept="1HfYo3" id="5zmpEkiAXaF" role="1HlULh">
              <node concept="3TQlhw" id="5zmpEkiAXaG" role="1Hhtcw">
                <node concept="3clFbS" id="5zmpEkiAXaH" role="2VODD2">
                  <node concept="3clFbF" id="5zmpEkiAXbV" role="3cqZAp">
                    <node concept="Xl_RD" id="5zmpEkiAXbU" role="3clFbG">
                      <property role="Xl_RC" value="" />
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3F0ifn" id="4CfWYHsh2co" role="3EZMnx">
          <property role="3F0ifm" value=")" />
          <node concept="11L4FC" id="4CfWYHsh2hp" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
        </node>
        <node concept="l2Vlx" id="5zmpEkiAXas" role="2iSdaV" />
        <node concept="pkWqt" id="5zmpEkiAXdh" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiAXdi" role="2VODD2">
            <node concept="3clFbF" id="5zmpEkiAXeq" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEkiAXY5" role="3clFbG">
                <node concept="2OqwBi" id="5zmpEkiAXkt" role="2Oq$k0">
                  <node concept="pncrf" id="5zmpEkiAXep" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiAXDP" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiAHH8" />
                  </node>
                </node>
                <node concept="3x8VRR" id="5zmpEkiAYA0" role="2OqNvi" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAX9W" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAYGh">
    <property role="3GE5qa" value="engine" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yf" resolve="SMStart" />
    <node concept="3EZMnI" id="5zmpEkiAYGj" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAYGq" role="3EZMnx">
        <property role="3F0ifm" value="sm_start(" />
        <node concept="11LMrY" id="5zmpEkiAYI5" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="1iCGBv" id="5zmpEkiAYIg" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAYFR" />
        <node concept="1sVBvm" id="5zmpEkiAYIi" role="1sWHZn">
          <node concept="3F0A7n" id="5zmpEkiAYIr" role="2wV5jI">
            <property role="1Intyy" value="true" />
            <ref role="1NtTu8" to="tpck:h0TrG11" resolve="name" />
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiAYI_" role="3EZMnx">
        <property role="3F0ifm" value=")" />
        <node concept="11L4FC" id="5zmpEkiAYKz" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAYGm" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAYKZ">
    <property role="3GE5qa" value="engine" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yg" resolve="SMTerminate" />
    <node concept="3EZMnI" id="5zmpEkiAYL1" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAYL8" role="3EZMnx">
        <property role="3F0ifm" value="sm_terminate(" />
        <node concept="11LMrY" id="5zmpEkiAYMP" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEkiAYNi" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAYK_" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiAYNs" role="3EZMnx">
        <property role="3F0ifm" value=");" />
        <node concept="11L4FC" id="5zmpEkiAYPa" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAYL4" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiAYPD">
    <property role="3GE5qa" value="engine" />
    <ref role="1XX52x" to="pz83:5zmpEki_6yh" resolve="SMTrigger" />
    <node concept="3EZMnI" id="5zmpEkiAYPF" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiAYPM" role="3EZMnx">
        <property role="3F0ifm" value="sm_trigger(" />
        <node concept="11LMrY" id="5zmpEkiAYRv" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="3F1sOY" id="5zmpEkiAYRA" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEkiAYPe" />
      </node>
      <node concept="3EZMnI" id="5zmpEkiAYTA" role="3EZMnx">
        <property role="1cu_pB" value="2" />
        <node concept="3F0ifn" id="4CfWYHshJL3" role="3EZMnx">
          <property role="3F0ifm" value="," />
          <node concept="11L4FC" id="4CfWYHshJTW" role="3F10Kt">
            <property role="VOm3f" value="true" />
          </node>
        </node>
        <node concept="VPM3Z" id="5zmpEkiAYTC" role="3F10Kt">
          <property role="VOm3f" value="false" />
        </node>
        <node concept="3F2HdR" id="5zmpEkiAZW1" role="3EZMnx">
          <property role="2czwfO" value="," />
          <ref role="1NtTu8" to="pz83:5zmpEkiAYPc" />
          <node concept="l2Vlx" id="5zmpEkiAZW3" role="2czzBx" />
          <node concept="1HlG4h" id="5zmpEkiB04a" role="2czzBI">
            <node concept="1HfYo3" id="5zmpEkiB04b" role="1HlULh">
              <node concept="3TQlhw" id="5zmpEkiB04c" role="1Hhtcw">
                <node concept="3clFbS" id="5zmpEkiB04d" role="2VODD2">
                  <node concept="3clFbF" id="5zmpEkiB08s" role="3cqZAp">
                    <node concept="Xl_RD" id="5zmpEkiB08r" role="3clFbG">
                      <property role="Xl_RC" value="" />
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="l2Vlx" id="5zmpEkiAYTF" role="2iSdaV" />
        <node concept="pkWqt" id="5zmpEkiAYTQ" role="pqm2j">
          <node concept="3clFbS" id="5zmpEkiAYTR" role="2VODD2">
            <node concept="3clFbF" id="5zmpEkiAYUW" role="3cqZAp">
              <node concept="2OqwBi" id="5zmpEkiAZB8" role="3clFbG">
                <node concept="2OqwBi" id="5zmpEkiAZ0B" role="2Oq$k0">
                  <node concept="pncrf" id="5zmpEkiAYUV" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiAZo5" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiAYPe" />
                  </node>
                </node>
                <node concept="3x8VRR" id="5zmpEkiAZRI" role="2OqNvi" />
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="3F0ifn" id="5zmpEkiGQDf" role="3EZMnx">
        <property role="3F0ifm" value=");" />
        <node concept="11L4FC" id="5zmpEkiGQId" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiAYPI" role="2iSdaV" />
    </node>
  </node>
  <node concept="24kQdi" id="5zmpEkiFiPd">
    <property role="3GE5qa" value="entities" />
    <ref role="1XX52x" to="pz83:5zmpEki_6y0" resolve="EndBigStepBlock" />
    <node concept="3EZMnI" id="5zmpEkiFiPN" role="2wV5jI">
      <node concept="3F0ifn" id="5zmpEkiFiPU" role="3EZMnx">
        <property role="3F0ifm" value="big-step end" />
      </node>
      <node concept="3F1sOY" id="5zmpEkiFiQ0" role="3EZMnx">
        <ref role="1NtTu8" to="pz83:5zmpEki_njC" />
      </node>
      <node concept="3F0ifn" id="5zmpEkiFiQ8" role="3EZMnx">
        <property role="3F0ifm" value=";" />
        <node concept="11L4FC" id="5zmpEkiFiRP" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
        <node concept="ljvvj" id="5zmpEkiFiUm" role="3F10Kt">
          <property role="VOm3f" value="true" />
        </node>
      </node>
      <node concept="l2Vlx" id="5zmpEkiFiPQ" role="2iSdaV" />
    </node>
  </node>
</model>

