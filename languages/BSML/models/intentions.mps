<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:acce7372-af49-4f40-8f5f-55dee3cbba21(BSML.intentions)">
  <persistence version="9" />
  <languages>
    <use id="d7a92d38-f7db-40d0-8431-763b0c3c9f20" name="jetbrains.mps.lang.intentions" version="0" />
    <use id="c72da2b9-7cce-4447-8389-f407dc1158b7" name="jetbrains.mps.lang.structure" version="1" />
    <use id="ed6d7656-532c-4bc2-81d1-af945aeb8280" name="jetbrains.mps.baseLanguage.blTypes" version="0" />
    <use id="aee9cad2-acd4-4608-aef2-0004f6a1cdbd" name="jetbrains.mps.lang.actions" version="0" />
    <devkit ref="fbc25dd2-5da4-483a-8b19-70928e1b62d7(jetbrains.mps.devkit.general-purpose)" />
  </languages>
  <imports>
    <import index="ahli" ref="r:44ccebce-f3a6-4238-afbf-c4a18f6348c1(com.mbeddr.core.buildconfig.behavior)" />
    <import index="pz83" ref="r:db81e786-b1e9-4de0-bf44-e4204ced8ed5(BSML.structure)" implicit="true" />
    <import index="hwgx" ref="r:fd2980c8-676c-4b19-b524-18c70e02f8b7(com.mbeddr.core.base.behavior)" implicit="true" />
    <import index="x27k" ref="r:75ecab8a-8931-4140-afc6-4b46398710fc(com.mbeddr.core.modules.structure)" implicit="true" />
  </imports>
  <registry>
    <language id="f3061a53-9226-4cc5-a443-f952ceaf5816" name="jetbrains.mps.baseLanguage">
      <concept id="1082485599095" name="jetbrains.mps.baseLanguage.structure.BlockStatement" flags="nn" index="9aQIb">
        <child id="1082485599096" name="statements" index="9aQI4" />
      </concept>
      <concept id="1215693861676" name="jetbrains.mps.baseLanguage.structure.BaseAssignmentExpression" flags="nn" index="d038R">
        <child id="1068498886297" name="rValue" index="37vLTx" />
        <child id="1068498886295" name="lValue" index="37vLTJ" />
      </concept>
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
      <concept id="1070534058343" name="jetbrains.mps.baseLanguage.structure.NullLiteral" flags="nn" index="10Nm6u" />
      <concept id="1068431474542" name="jetbrains.mps.baseLanguage.structure.VariableDeclaration" flags="ng" index="33uBYm">
        <child id="1068431790190" name="initializer" index="33vP2m" />
      </concept>
      <concept id="1068498886296" name="jetbrains.mps.baseLanguage.structure.VariableReference" flags="nn" index="37vLTw">
        <reference id="1068581517664" name="variableDeclaration" index="3cqZAo" />
      </concept>
      <concept id="1068498886294" name="jetbrains.mps.baseLanguage.structure.AssignmentExpression" flags="nn" index="37vLTI" />
      <concept id="4972933694980447171" name="jetbrains.mps.baseLanguage.structure.BaseVariableDeclaration" flags="ng" index="19Szcq">
        <child id="5680397130376446158" name="type" index="1tU5fm" />
      </concept>
      <concept id="1068580123152" name="jetbrains.mps.baseLanguage.structure.EqualsExpression" flags="nn" index="3clFbC" />
      <concept id="1068580123155" name="jetbrains.mps.baseLanguage.structure.ExpressionStatement" flags="nn" index="3clFbF">
        <child id="1068580123156" name="expression" index="3clFbG" />
      </concept>
      <concept id="1068580123159" name="jetbrains.mps.baseLanguage.structure.IfStatement" flags="nn" index="3clFbJ">
        <child id="1082485599094" name="ifFalseStatement" index="9aQIa" />
        <child id="1068580123160" name="condition" index="3clFbw" />
        <child id="1068580123161" name="ifTrue" index="3clFbx" />
      </concept>
      <concept id="1068580123136" name="jetbrains.mps.baseLanguage.structure.StatementList" flags="sn" stub="5293379017992965193" index="3clFbS">
        <child id="1068581517665" name="statement" index="3cqZAp" />
      </concept>
      <concept id="1068581242864" name="jetbrains.mps.baseLanguage.structure.LocalVariableDeclarationStatement" flags="nn" index="3cpWs8">
        <child id="1068581242865" name="localVariableDeclaration" index="3cpWs9" />
      </concept>
      <concept id="1068581242863" name="jetbrains.mps.baseLanguage.structure.LocalVariableDeclaration" flags="nr" index="3cpWsn" />
      <concept id="1079359253375" name="jetbrains.mps.baseLanguage.structure.ParenthesizedExpression" flags="nn" index="1eOMI4">
        <child id="1079359253376" name="expression" index="1eOMHV" />
      </concept>
      <concept id="1081516740877" name="jetbrains.mps.baseLanguage.structure.NotExpression" flags="nn" index="3fqX7Q">
        <child id="1081516765348" name="expression" index="3fr31v" />
      </concept>
      <concept id="1204053956946" name="jetbrains.mps.baseLanguage.structure.IMethodCall" flags="ng" index="1ndlxa">
        <reference id="1068499141037" name="baseMethodDeclaration" index="37wK5l" />
        <child id="1068499141038" name="actualArgument" index="37wK5m" />
      </concept>
      <concept id="1081773326031" name="jetbrains.mps.baseLanguage.structure.BinaryOperation" flags="nn" index="3uHJSO">
        <child id="1081773367579" name="rightExpression" index="3uHU7w" />
        <child id="1081773367580" name="leftExpression" index="3uHU7B" />
      </concept>
      <concept id="1080120340718" name="jetbrains.mps.baseLanguage.structure.AndExpression" flags="nn" index="1Wc70l" />
    </language>
    <language id="d7a92d38-f7db-40d0-8431-763b0c3c9f20" name="jetbrains.mps.lang.intentions">
      <concept id="1192794744107" name="jetbrains.mps.lang.intentions.structure.IntentionDeclaration" flags="ig" index="2S6QgY" />
      <concept id="1192794782375" name="jetbrains.mps.lang.intentions.structure.DescriptionBlock" flags="in" index="2S6ZIM" />
      <concept id="1192795771125" name="jetbrains.mps.lang.intentions.structure.IsApplicableBlock" flags="in" index="2SaL7w" />
      <concept id="1192795911897" name="jetbrains.mps.lang.intentions.structure.ExecuteBlock" flags="in" index="2Sbjvc" />
      <concept id="1192796902958" name="jetbrains.mps.lang.intentions.structure.ConceptFunctionParameter_node" flags="nn" index="2Sf5sV" />
      <concept id="2522969319638091381" name="jetbrains.mps.lang.intentions.structure.BaseIntentionDeclaration" flags="ig" index="2ZfUlf">
        <reference id="2522969319638198290" name="forConcept" index="2ZfgGC" />
        <child id="2522969319638198291" name="executeFunction" index="2ZfgGD" />
        <child id="2522969319638093995" name="isApplicableFunction" index="2ZfVeh" />
        <child id="2522969319638093993" name="descriptionFunction" index="2ZfVej" />
      </concept>
    </language>
    <language id="aee9cad2-acd4-4608-aef2-0004f6a1cdbd" name="jetbrains.mps.lang.actions">
      <concept id="767145758118872830" name="jetbrains.mps.lang.actions.structure.NF_Link_SetNewChildOperation" flags="nn" index="2DeJnY" />
    </language>
    <language id="7866978e-a0f0-4cc7-81bc-4d213d9375e1" name="jetbrains.mps.lang.smodel">
      <concept id="1177026924588" name="jetbrains.mps.lang.smodel.structure.RefConcept_Reference" flags="nn" index="chp4Y">
        <reference id="1177026940964" name="conceptDeclaration" index="cht4Q" />
      </concept>
      <concept id="1138411891628" name="jetbrains.mps.lang.smodel.structure.SNodeOperation" flags="nn" index="eCIE_">
        <child id="1144104376918" name="parameter" index="1xVPHs" />
      </concept>
      <concept id="1179409122411" name="jetbrains.mps.lang.smodel.structure.Node_ConceptMethodCall" flags="nn" index="2qgKlT" />
      <concept id="1138676077309" name="jetbrains.mps.lang.smodel.structure.EnumMemberReference" flags="nn" index="uoxfO">
        <reference id="1138676095763" name="enumMember" index="uo_Cq" />
      </concept>
      <concept id="1143234257716" name="jetbrains.mps.lang.smodel.structure.Node_GetModelOperation" flags="nn" index="I4A8Y" />
      <concept id="1171407110247" name="jetbrains.mps.lang.smodel.structure.Node_GetAncestorOperation" flags="nn" index="2Xjw5R" />
      <concept id="1146171026731" name="jetbrains.mps.lang.smodel.structure.Property_HasValue_Enum" flags="nn" index="3t7uKx">
        <child id="1146171026732" name="value" index="3t7uKA" />
      </concept>
      <concept id="1171999116870" name="jetbrains.mps.lang.smodel.structure.Node_IsNullOperation" flags="nn" index="3w_OXm" />
      <concept id="1172008320231" name="jetbrains.mps.lang.smodel.structure.Node_IsNotNullOperation" flags="nn" index="3x8VRR" />
      <concept id="1144101972840" name="jetbrains.mps.lang.smodel.structure.OperationParm_Concept" flags="ng" index="1xMEDy">
        <child id="1207343664468" name="conceptArgument" index="ri$Ld" />
      </concept>
      <concept id="1180636770613" name="jetbrains.mps.lang.smodel.structure.SNodeCreator" flags="nn" index="3zrR0B">
        <child id="1180636770616" name="createdType" index="3zrR0E" />
      </concept>
      <concept id="6407023681583036853" name="jetbrains.mps.lang.smodel.structure.NodeAttributeQualifier" flags="ng" index="3CFYIy">
        <reference id="6407023681583036854" name="attributeConcept" index="3CFYIx" />
      </concept>
      <concept id="6407023681583031218" name="jetbrains.mps.lang.smodel.structure.AttributeAccess" flags="nn" index="3CFZ6_">
        <child id="6407023681583036852" name="qualifier" index="3CFYIz" />
      </concept>
      <concept id="1140133623887" name="jetbrains.mps.lang.smodel.structure.Node_DeleteOperation" flags="nn" index="1PgB_6" />
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
  <node concept="2S6QgY" id="5zmpEkiB_c6">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="ToggleNegation" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6yc" resolve="TriggerEventRef" />
    <node concept="2S6ZIM" id="5zmpEkiB_c7" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiB_c8" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiB_dz" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiB_dy" role="3clFbG">
            <property role="Xl_RC" value="Toggle Negation" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiB_c9" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiB_ca" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiB_mS" role="3cqZAp">
          <node concept="37vLTI" id="5zmpEkiB_CG" role="3clFbG">
            <node concept="3fqX7Q" id="5zmpEkiB_D1" role="37vLTx">
              <node concept="1eOMI4" id="5zmpEkiB_E3" role="3fr31v">
                <node concept="2OqwBi" id="5zmpEkiB_HK" role="1eOMHV">
                  <node concept="2Sf5sV" id="5zmpEkiB_EY" role="2Oq$k0" />
                  <node concept="3TrcHB" id="5zmpEkiB_R7" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEkiA$Bv" resolve="negation" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="2OqwBi" id="5zmpEkiB_oT" role="37vLTJ">
              <node concept="2Sf5sV" id="5zmpEkiB_mR" role="2Oq$k0" />
              <node concept="3TrcHB" id="5zmpEkiB_xX" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEkiA$Bv" resolve="negation" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="5zmpEkiBMTx">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="removePriority" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6yb" resolve="Transition" />
    <node concept="2S6ZIM" id="5zmpEkiBMTy" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiBMTz" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiBMV6" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiBMV5" role="3clFbG">
            <property role="Xl_RC" value="Remove Priority" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiBMT$" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiBMT_" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiBQr8" role="3cqZAp">
          <node concept="2OqwBi" id="5zmpEkiBQQH" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiBQxt" role="2Oq$k0">
              <node concept="2Sf5sV" id="5zmpEkiBQr7" role="2Oq$k0" />
              <node concept="3CFZ6_" id="5zmpEkiBQLO" role="2OqNvi">
                <node concept="3CFYIy" id="5zmpEkiBQM5" role="3CFYIz">
                  <ref role="3CFYIx" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
                </node>
              </node>
            </node>
            <node concept="1PgB_6" id="5zmpEkiBQVN" role="2OqNvi" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="5zmpEkiBN2C" role="2ZfVeh">
      <node concept="3clFbS" id="5zmpEkiBN2D" role="2VODD2">
        <node concept="3cpWs8" id="5zmpEkiBN4q" role="3cqZAp">
          <node concept="3cpWsn" id="5zmpEki_y5w" role="3cpWs9">
            <property role="TrG5h" value="config" />
            <node concept="3Tqbb2" id="5zmpEki_y5s" role="1tU5fm">
              <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
            </node>
            <node concept="1PxgMI" id="5zmpEki_zGG" role="33vP2m">
              <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
              <node concept="2OqwBi" id="5zmpEki_z2i" role="1PxMeX">
                <node concept="2YIFZM" id="5zmpEki_yno" role="2Oq$k0">
                  <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                  <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                  <node concept="2OqwBi" id="5zmpEki_yzW" role="37wK5m">
                    <node concept="2Sf5sV" id="5zmpEkiBPEm" role="2Oq$k0" />
                    <node concept="I4A8Y" id="5zmpEki_yUq" role="2OqNvi" />
                  </node>
                </node>
                <node concept="2qgKlT" id="5zmpEki_znb" role="2OqNvi">
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
          <node concept="1Wc70l" id="5zmpEkiBO$b" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiBPjo" role="3uHU7w">
              <node concept="2OqwBi" id="5zmpEkiBOMV" role="2Oq$k0">
                <node concept="2Sf5sV" id="5zmpEkiBODj" role="2Oq$k0" />
                <node concept="3CFZ6_" id="5zmpEkiBP7R" role="2OqNvi">
                  <node concept="3CFYIy" id="5zmpEkiBPeU" role="3CFYIz">
                    <ref role="3CFYIx" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
                  </node>
                </node>
              </node>
              <node concept="3x8VRR" id="5zmpEkiBPz4" role="2OqNvi" />
            </node>
            <node concept="2OqwBi" id="5zmpEkiBOgc" role="3uHU7B">
              <node concept="2OqwBi" id="5zmpEkiBNKg" role="2Oq$k0">
                <node concept="37vLTw" id="5zmpEkiBNFt" role="2Oq$k0">
                  <ref role="3cqZAo" node="5zmpEki_y5w" resolve="config" />
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
  </node>
  <node concept="2S6QgY" id="5zmpEkiBQYB">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="addPriority" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6yb" resolve="Transition" />
    <node concept="2S6ZIM" id="5zmpEkiBQYC" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiBQYD" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiBR0m" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiBR0l" role="3clFbG">
            <property role="Xl_RC" value="Add Priority (highest=1)" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiBQYE" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiBQYF" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiBRBv" role="3cqZAp">
          <node concept="37vLTI" id="5zmpEkiBS35" role="3clFbG">
            <node concept="2ShNRf" id="5zmpEkiBS6a" role="37vLTx">
              <node concept="3zrR0B" id="5zmpEkiBS3B" role="2ShVmc">
                <node concept="3Tqbb2" id="5zmpEkiBS3C" role="3zrR0E">
                  <ref role="ehGHo" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
                </node>
              </node>
            </node>
            <node concept="2OqwBi" id="5zmpEkiBRHO" role="37vLTJ">
              <node concept="2Sf5sV" id="5zmpEkiBRBu" role="2Oq$k0" />
              <node concept="3CFZ6_" id="5zmpEkiBRYb" role="2OqNvi">
                <node concept="3CFYIy" id="5zmpEkiBRYs" role="3CFYIz">
                  <ref role="3CFYIx" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3clFbF" id="5zmpEkiBSaJ" role="3cqZAp">
          <node concept="2OqwBi" id="5zmpEkiBShm" role="3clFbG">
            <node concept="2Sf5sV" id="5zmpEkiBSaH" role="2Oq$k0" />
            <node concept="3CFZ6_" id="5zmpEkiBSzq" role="2OqNvi">
              <node concept="3CFYIy" id="5zmpEkiBSzF" role="3CFYIz">
                <ref role="3CFYIx" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="5zmpEkiBRbX" role="2ZfVeh">
      <node concept="3clFbS" id="5zmpEkiBRbY" role="2VODD2">
        <node concept="3cpWs8" id="5zmpEkiBRdn" role="3cqZAp">
          <node concept="3cpWsn" id="5zmpEkiBRdo" role="3cpWs9">
            <property role="TrG5h" value="config" />
            <node concept="3Tqbb2" id="5zmpEkiBRdp" role="1tU5fm">
              <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
            </node>
            <node concept="1PxgMI" id="5zmpEkiBRdq" role="33vP2m">
              <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
              <node concept="2OqwBi" id="5zmpEkiBRdr" role="1PxMeX">
                <node concept="2YIFZM" id="5zmpEkiBRds" role="2Oq$k0">
                  <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                  <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                  <node concept="2OqwBi" id="5zmpEkiBRdt" role="37wK5m">
                    <node concept="2Sf5sV" id="5zmpEkiBRdu" role="2Oq$k0" />
                    <node concept="I4A8Y" id="5zmpEkiBRdv" role="2OqNvi" />
                  </node>
                </node>
                <node concept="2qgKlT" id="5zmpEkiBRdw" role="2OqNvi">
                  <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                  <node concept="3TUQnm" id="5zmpEkiBRdx" role="37wK5m">
                    <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3clFbF" id="5zmpEkiBRdy" role="3cqZAp">
          <node concept="1Wc70l" id="5zmpEkiBRdz" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiBRd$" role="3uHU7w">
              <node concept="2OqwBi" id="5zmpEkiBRd_" role="2Oq$k0">
                <node concept="2Sf5sV" id="5zmpEkiBRdA" role="2Oq$k0" />
                <node concept="3CFZ6_" id="5zmpEkiBRdB" role="2OqNvi">
                  <node concept="3CFYIy" id="5zmpEkiBRdC" role="3CFYIz">
                    <ref role="3CFYIx" to="pz83:5zmpEki_6y5" resolve="PriorityAnnotation" />
                  </node>
                </node>
              </node>
              <node concept="3w_OXm" id="5zmpEkiBRx4" role="2OqNvi" />
            </node>
            <node concept="2OqwBi" id="5zmpEkiBRdE" role="3uHU7B">
              <node concept="2OqwBi" id="5zmpEkiBRdF" role="2Oq$k0">
                <node concept="37vLTw" id="5zmpEkiBRdG" role="2Oq$k0">
                  <ref role="3cqZAo" node="5zmpEkiBRdo" resolve="config" />
                </node>
                <node concept="3TrcHB" id="5zmpEkiBRdH" role="2OqNvi">
                  <ref role="3TsBF5" to="pz83:5zmpEki$omR" resolve="priority" />
                </node>
              </node>
              <node concept="3t7uKx" id="5zmpEkiBRdI" role="2OqNvi">
                <node concept="uoxfO" id="5zmpEkiBRdJ" role="3t7uKA">
                  <ref role="uo_Cq" to="pz83:5zmpEki$om4" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="5zmpEkiCiQZ">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="ToggleStable" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6ya" resolve="StateLocalDeclaration" />
    <node concept="2S6ZIM" id="5zmpEkiCiR0" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiCiR1" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiCiS_" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiCiS$" role="3clFbG">
            <property role="Xl_RC" value="Toggle Stable" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiCiR2" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiCiR3" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiCkeh" role="3cqZAp">
          <node concept="37vLTI" id="5zmpEkiCllQ" role="3clFbG">
            <node concept="3fqX7Q" id="5zmpEkiClmb" role="37vLTx">
              <node concept="1eOMI4" id="5zmpEkiClp7" role="3fr31v">
                <node concept="2OqwBi" id="5zmpEkiClBW" role="1eOMHV">
                  <node concept="2Sf5sV" id="5zmpEkiClq2" role="2Oq$k0" />
                  <node concept="3TrcHB" id="5zmpEkiCm5E" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEkiAhfQ" resolve="stable" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="2OqwBi" id="5zmpEkiCkpr" role="37vLTJ">
              <node concept="2Sf5sV" id="5zmpEkiCkeg" role="2Oq$k0" />
              <node concept="3TrcHB" id="5zmpEkiCkQQ" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEkiAhfQ" resolve="stable" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="5zmpEkiCiY3" role="2ZfVeh">
      <node concept="3clFbS" id="5zmpEkiCiY4" role="2VODD2">
        <node concept="3cpWs8" id="5zmpEkiCj0_" role="3cqZAp">
          <node concept="3cpWsn" id="5zmpEkiCj0A" role="3cpWs9">
            <property role="TrG5h" value="config" />
            <node concept="3Tqbb2" id="5zmpEkiCj0B" role="1tU5fm">
              <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
            </node>
            <node concept="1PxgMI" id="5zmpEkiCj0C" role="33vP2m">
              <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
              <node concept="2OqwBi" id="5zmpEkiCj0D" role="1PxMeX">
                <node concept="2YIFZM" id="5zmpEkiCj0E" role="2Oq$k0">
                  <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                  <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                  <node concept="2OqwBi" id="5zmpEkiCj0F" role="37wK5m">
                    <node concept="2Sf5sV" id="5zmpEkiCj0G" role="2Oq$k0" />
                    <node concept="I4A8Y" id="5zmpEkiCj0H" role="2OqNvi" />
                  </node>
                </node>
                <node concept="2qgKlT" id="5zmpEkiCj0I" role="2OqNvi">
                  <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                  <node concept="3TUQnm" id="5zmpEkiCj0J" role="37wK5m">
                    <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3clFbF" id="5zmpEkiCjeu" role="3cqZAp">
          <node concept="2OqwBi" id="5zmpEkiCjRB" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiCjj2" role="2Oq$k0">
              <node concept="37vLTw" id="5zmpEkiCjes" role="2Oq$k0">
                <ref role="3cqZAo" node="5zmpEkiCj0A" resolve="config" />
              </node>
              <node concept="3TrcHB" id="5zmpEkiCjzW" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEki$omb" resolve="bigStepMaximality" />
              </node>
            </node>
            <node concept="3t7uKx" id="5zmpEkiCjZu" role="2OqNvi">
              <node concept="uoxfO" id="5zmpEkiCjZw" role="3t7uKA">
                <ref role="uo_Cq" to="pz83:5zmpEki$olb" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="5zmpEkiFb_$">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="AddEventBinding_Int" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6y2" resolve="Event" />
    <node concept="2S6ZIM" id="5zmpEkiFb__" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiFb_A" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiFbBv" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiFbBu" role="3clFbG">
            <property role="Xl_RC" value="Add Function Binding" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiFb_B" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiFb_C" role="2VODD2">
        <node concept="3clFbJ" id="5zmpEkiFbK7" role="3cqZAp">
          <node concept="3clFbC" id="5zmpEkiFcb_" role="3clFbw">
            <node concept="10Nm6u" id="5zmpEkiFcc3" role="3uHU7w" />
            <node concept="2OqwBi" id="5zmpEkiFbSx" role="3uHU7B">
              <node concept="2Sf5sV" id="5zmpEkiFbKm" role="2Oq$k0" />
              <node concept="3TrEf2" id="5zmpEkiFc9Q" role="2OqNvi">
                <ref role="3Tt5mk" to="pz83:5zmpEki_r4E" />
              </node>
            </node>
          </node>
          <node concept="3clFbS" id="5zmpEkiFbK9" role="3clFbx">
            <node concept="3clFbF" id="5zmpEkiFccq" role="3cqZAp">
              <node concept="37vLTI" id="5zmpEkiFcA8" role="3clFbG">
                <node concept="2ShNRf" id="5zmpEkiFcAB" role="37vLTx">
                  <node concept="3zrR0B" id="5zmpEkiFcHy" role="2ShVmc">
                    <node concept="3Tqbb2" id="5zmpEkiFcH$" role="3zrR0E">
                      <ref role="ehGHo" to="pz83:5zmpEki_6yd" resolve="CFunctionBinding" />
                    </node>
                  </node>
                </node>
                <node concept="2OqwBi" id="5zmpEkiFcj6" role="37vLTJ">
                  <node concept="2Sf5sV" id="5zmpEkiFccp" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiFc$r" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEki_r4E" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="5zmpEkiFcIC">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="ToggleInEvent" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6y2" resolve="Event" />
    <node concept="2S6ZIM" id="5zmpEkiFcID" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiFcIE" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiFcKz" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiFcKy" role="3clFbG">
            <property role="Xl_RC" value="Toggle In-event" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiFcIF" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiFcIG" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiFewU" role="3cqZAp">
          <node concept="37vLTI" id="5zmpEkiFfuw" role="3clFbG">
            <node concept="3fqX7Q" id="5zmpEkiFfuP" role="37vLTx">
              <node concept="1eOMI4" id="5zmpEkiFfxx" role="3fr31v">
                <node concept="2OqwBi" id="5zmpEkiFfI0" role="1eOMHV">
                  <node concept="2Sf5sV" id="5zmpEkiFf$6" role="2Oq$k0" />
                  <node concept="3TrcHB" id="5zmpEkiFggz" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki_r4x" resolve="in_event" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="2OqwBi" id="5zmpEkiFeBA" role="37vLTJ">
              <node concept="2Sf5sV" id="5zmpEkiFewT" role="2Oq$k0" />
              <node concept="3TrcHB" id="5zmpEkiFf9W" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEki_r4x" resolve="in_event" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="5zmpEkiFcQ$" role="2ZfVeh">
      <node concept="3clFbS" id="5zmpEkiFcQ_" role="2VODD2">
        <node concept="3cpWs8" id="5zmpEkiFcTo" role="3cqZAp">
          <node concept="3cpWsn" id="5zmpEkiFcTp" role="3cpWs9">
            <property role="TrG5h" value="config" />
            <node concept="3Tqbb2" id="5zmpEkiFcTq" role="1tU5fm">
              <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
            </node>
            <node concept="1PxgMI" id="5zmpEkiFcTr" role="33vP2m">
              <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
              <node concept="2OqwBi" id="5zmpEkiFcTs" role="1PxMeX">
                <node concept="2YIFZM" id="5zmpEkiFcTt" role="2Oq$k0">
                  <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                  <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                  <node concept="2OqwBi" id="5zmpEkiFcTu" role="37wK5m">
                    <node concept="2Sf5sV" id="5zmpEkiFcTv" role="2Oq$k0" />
                    <node concept="I4A8Y" id="5zmpEkiFcTw" role="2OqNvi" />
                  </node>
                </node>
                <node concept="2qgKlT" id="5zmpEkiFcTx" role="2OqNvi">
                  <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                  <node concept="3TUQnm" id="5zmpEkiFcTy" role="37wK5m">
                    <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3clFbF" id="5zmpEkiFd6C" role="3cqZAp">
          <node concept="2OqwBi" id="5zmpEkiFecD" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiFdbc" role="2Oq$k0">
              <node concept="37vLTw" id="5zmpEkiFd6A" role="2Oq$k0">
                <ref role="3cqZAo" node="5zmpEkiFcTp" resolve="config" />
              </node>
              <node concept="3TrcHB" id="5zmpEkiFdPH" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEki$omg" resolve="externalInEvent" />
              </node>
            </node>
            <node concept="3t7uKx" id="5zmpEkiFekw" role="2OqNvi">
              <node concept="uoxfO" id="5zmpEkiFeky" role="3t7uKA">
                <ref role="uo_Cq" to="pz83:5zmpEki$olK" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="5zmpEkiFgjA">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="ToggleRendezvous" />
    <ref role="2ZfgGC" to="pz83:5zmpEki_6y2" resolve="Event" />
    <node concept="2S6ZIM" id="5zmpEkiFgjB" role="2ZfVej">
      <node concept="3clFbS" id="5zmpEkiFgjC" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiFglD" role="3cqZAp">
          <node concept="Xl_RD" id="5zmpEkiFglC" role="3clFbG">
            <property role="Xl_RC" value="Toggle Rendezvous" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="5zmpEkiFgjD" role="2ZfgGD">
      <node concept="3clFbS" id="5zmpEkiFgjE" role="2VODD2">
        <node concept="3clFbF" id="5zmpEkiFh1t" role="3cqZAp">
          <node concept="37vLTI" id="5zmpEkiFhZu" role="3clFbG">
            <node concept="3fqX7Q" id="5zmpEkiFhZN" role="37vLTx">
              <node concept="1eOMI4" id="5zmpEkiFi2v" role="3fr31v">
                <node concept="2OqwBi" id="5zmpEkiFidy" role="1eOMHV">
                  <node concept="2Sf5sV" id="5zmpEkiFi54" role="2Oq$k0" />
                  <node concept="3TrcHB" id="5zmpEkiFiLJ" role="2OqNvi">
                    <ref role="3TsBF5" to="pz83:5zmpEki_r4z" resolve="rendezvous" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="2OqwBi" id="5zmpEkiFh89" role="37vLTJ">
              <node concept="2Sf5sV" id="5zmpEkiFh1s" role="2Oq$k0" />
              <node concept="3TrcHB" id="5zmpEkiFhEv" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEki_r4z" resolve="rendezvous" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="5zmpEkiFgvD" role="2ZfVeh">
      <node concept="3clFbS" id="5zmpEkiFgvE" role="2VODD2">
        <node concept="3cpWs8" id="5zmpEkiFgxc" role="3cqZAp">
          <node concept="3cpWsn" id="5zmpEkiFgxd" role="3cpWs9">
            <property role="TrG5h" value="config" />
            <node concept="3Tqbb2" id="5zmpEkiFgxe" role="1tU5fm">
              <ref role="ehGHo" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
            </node>
            <node concept="1PxgMI" id="5zmpEkiFgxf" role="33vP2m">
              <ref role="1PxNhF" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
              <node concept="2OqwBi" id="5zmpEkiFgxg" role="1PxMeX">
                <node concept="2YIFZM" id="5zmpEkiFgxh" role="2Oq$k0">
                  <ref role="37wK5l" to="ahli:3L_VuqblMPO" resolve="findBC" />
                  <ref role="1Pybhc" to="ahli:78Ts1skprjP" resolve="BCHelper" />
                  <node concept="2OqwBi" id="5zmpEkiFgxi" role="37wK5m">
                    <node concept="2Sf5sV" id="5zmpEkiFgxj" role="2Oq$k0" />
                    <node concept="I4A8Y" id="5zmpEkiFgxk" role="2OqNvi" />
                  </node>
                </node>
                <node concept="2qgKlT" id="5zmpEkiFgxl" role="2OqNvi">
                  <ref role="37wK5l" to="hwgx:3R$6B6bL1DB" resolve="findItemOfType" />
                  <node concept="3TUQnm" id="5zmpEkiFgxm" role="37wK5m">
                    <ref role="3TV0OU" to="pz83:5zmpEki$om8" resolve="StateMachineConfigItem" />
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
        <node concept="3clFbF" id="5zmpEkiFgxn" role="3cqZAp">
          <node concept="2OqwBi" id="5zmpEkiFgxo" role="3clFbG">
            <node concept="2OqwBi" id="5zmpEkiFgxp" role="2Oq$k0">
              <node concept="37vLTw" id="5zmpEkiFgxq" role="2Oq$k0">
                <ref role="3cqZAo" node="5zmpEkiFgxd" resolve="config" />
              </node>
              <node concept="3TrcHB" id="5zmpEkiFgPQ" role="2OqNvi">
                <ref role="3TsBF5" to="pz83:5zmpEki$omd" resolve="concurrency" />
              </node>
            </node>
            <node concept="3t7uKx" id="5zmpEkiFgxs" role="2OqNvi">
              <node concept="uoxfO" id="5zmpEkiFgxt" role="3t7uKA">
                <ref role="uo_Cq" to="pz83:5zmpEki$okY" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="2S6QgY" id="4CfWYHsf7TT">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="ToggleQueryFUnctionAttr" />
    <ref role="2ZfgGC" to="x27k:5_l8w1EmTvt" resolve="FunctionSignature" />
    <node concept="2S6ZIM" id="4CfWYHsf7TU" role="2ZfVej">
      <node concept="3clFbS" id="4CfWYHsf7TV" role="2VODD2">
        <node concept="3clFbF" id="4CfWYHsf9jI" role="3cqZAp">
          <node concept="Xl_RD" id="4CfWYHsf9jH" role="3clFbG">
            <property role="Xl_RC" value="Toggle IsQuery" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2Sbjvc" id="4CfWYHsf7TW" role="2ZfgGD">
      <node concept="3clFbS" id="4CfWYHsf7TX" role="2VODD2">
        <node concept="3clFbJ" id="4CfWYHsfbnH" role="3cqZAp">
          <node concept="3clFbC" id="4CfWYHsfbYG" role="3clFbw">
            <node concept="10Nm6u" id="4CfWYHsfbZc" role="3uHU7w" />
            <node concept="2OqwBi" id="4CfWYHsfbzd" role="3uHU7B">
              <node concept="2Sf5sV" id="4CfWYHsfbnW" role="2Oq$k0" />
              <node concept="3CFZ6_" id="4CfWYHsfbVx" role="2OqNvi">
                <node concept="3CFYIy" id="4CfWYHsfbW6" role="3CFYIz">
                  <ref role="3CFYIx" to="pz83:5zmpEki_6y8" resolve="SMFunctionAttribute" />
                </node>
              </node>
            </node>
          </node>
          <node concept="3clFbS" id="4CfWYHsfbnJ" role="3clFbx">
            <node concept="3clFbF" id="4CfWYHsfbZz" role="3cqZAp">
              <node concept="2OqwBi" id="4CfWYHsfcQl" role="3clFbG">
                <node concept="2OqwBi" id="4CfWYHsfc8M" role="2Oq$k0">
                  <node concept="2Sf5sV" id="4CfWYHsfbZy" role="2Oq$k0" />
                  <node concept="3CFZ6_" id="4CfWYHsfcx6" role="2OqNvi">
                    <node concept="3CFYIy" id="4CfWYHsfcxn" role="3CFYIz">
                      <ref role="3CFYIx" to="pz83:5zmpEki_6y8" resolve="SMFunctionAttribute" />
                    </node>
                  </node>
                </node>
                <node concept="2DeJnY" id="4CfWYHsfd4T" role="2OqNvi" />
              </node>
            </node>
          </node>
          <node concept="9aQIb" id="4CfWYHsfd8J" role="9aQIa">
            <node concept="3clFbS" id="4CfWYHsfd8K" role="9aQI4">
              <node concept="3clFbF" id="4CfWYHsfdco" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsfdNd" role="3clFbG">
                  <node concept="2OqwBi" id="4CfWYHsfdlB" role="2Oq$k0">
                    <node concept="2Sf5sV" id="4CfWYHsfdcn" role="2Oq$k0" />
                    <node concept="3CFZ6_" id="4CfWYHsfdHZ" role="2OqNvi">
                      <node concept="3CFYIy" id="4CfWYHsfdIg" role="3CFYIz">
                        <ref role="3CFYIx" to="pz83:5zmpEki_6y8" resolve="SMFunctionAttribute" />
                      </node>
                    </node>
                  </node>
                  <node concept="1PgB_6" id="4CfWYHsfdSj" role="2OqNvi" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2SaL7w" id="4CfWYHsf9sv" role="2ZfVeh">
      <node concept="3clFbS" id="4CfWYHsf9sw" role="2VODD2">
        <node concept="3clFbF" id="4CfWYHsf9tC" role="3cqZAp">
          <node concept="2OqwBi" id="4CfWYHsfb0I" role="3clFbG">
            <node concept="2OqwBi" id="4CfWYHsf9Yj" role="2Oq$k0">
              <node concept="2Sf5sV" id="4CfWYHsf9tB" role="2Oq$k0" />
              <node concept="2Xjw5R" id="4CfWYHsfaJ1" role="2OqNvi">
                <node concept="1xMEDy" id="4CfWYHsfaJ3" role="1xVPHs">
                  <node concept="chp4Y" id="4CfWYHsfaLs" role="ri$Ld">
                    <ref role="cht4Q" to="pz83:5zmpEki_6zd" resolve="IStateMachine" />
                  </node>
                </node>
              </node>
            </node>
            <node concept="3w_OXm" id="4CfWYHsfbk6" role="2OqNvi" />
          </node>
        </node>
      </node>
    </node>
  </node>
</model>

