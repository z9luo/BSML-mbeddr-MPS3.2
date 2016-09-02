<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:022b672e-f840-476d-80d4-bb376a924068(BSML.actions)">
  <persistence version="9" />
  <languages>
    <use id="aee9cad2-acd4-4608-aef2-0004f6a1cdbd" name="jetbrains.mps.lang.actions" version="0" />
    <devkit ref="fbc25dd2-5da4-483a-8b19-70928e1b62d7(jetbrains.mps.devkit.general-purpose)" />
  </languages>
  <imports>
    <import index="pz83" ref="r:db81e786-b1e9-4de0-bf44-e4204ced8ed5(BSML.structure)" implicit="true" />
    <import index="c4fa" ref="r:9f0e84b6-2ec7-4f9e-83e0-feedc77b63a3(com.mbeddr.core.statements.structure)" implicit="true" />
    <import index="mj1l" ref="r:c371cf98-dcc8-4a43-8eb8-8a8096de18b2(com.mbeddr.core.expressions.structure)" implicit="true" />
    <import index="tpck" ref="r:00000000-0000-4000-0000-011c89590288(jetbrains.mps.lang.core.structure)" implicit="true" />
    <import index="x27k" ref="r:75ecab8a-8931-4140-afc6-4b46398710fc(com.mbeddr.core.modules.structure)" implicit="true" />
  </imports>
  <registry>
    <language id="f3061a53-9226-4cc5-a443-f952ceaf5816" name="jetbrains.mps.baseLanguage">
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
      <concept id="1081773326031" name="jetbrains.mps.baseLanguage.structure.BinaryOperation" flags="nn" index="3uHJSO">
        <child id="1081773367579" name="rightExpression" index="3uHU7w" />
        <child id="1081773367580" name="leftExpression" index="3uHU7B" />
      </concept>
    </language>
    <language id="aee9cad2-acd4-4608-aef2-0004f6a1cdbd" name="jetbrains.mps.lang.actions">
      <concept id="1196433923911" name="jetbrains.mps.lang.actions.structure.SideTransform_SimpleString" flags="nn" index="2h1dTh">
        <property id="1196433942569" name="text" index="2h1i$Z" />
      </concept>
      <concept id="1177323996388" name="jetbrains.mps.lang.actions.structure.AddMenuPart" flags="ng" index="tYCnQ" />
      <concept id="1177333529597" name="jetbrains.mps.lang.actions.structure.ConceptPart" flags="ng" index="uyZFJ">
        <reference id="1177333551023" name="concept" index="uz4UX" />
        <child id="1177333559040" name="part" index="uz6Si" />
      </concept>
      <concept id="1177497140107" name="jetbrains.mps.lang.actions.structure.ConceptFunctionParameter_sourceNode" flags="nn" index="Cj7Ep" />
      <concept id="1177498013932" name="jetbrains.mps.lang.actions.structure.SimpleSideTransformMenuPart" flags="ng" index="Cmt7Y">
        <child id="1177498166690" name="matchingText" index="Cn2iK" />
        <child id="1177498182537" name="descriptionText" index="Cn6ar" />
        <child id="1177498207384" name="handler" index="Cncma" />
      </concept>
      <concept id="1177498227294" name="jetbrains.mps.lang.actions.structure.QueryFunction_SideTransform_Handler" flags="in" index="Cnhdc" />
      <concept id="767145758118872830" name="jetbrains.mps.lang.actions.structure.NF_Link_SetNewChildOperation" flags="nn" index="2DeJnY" />
      <concept id="1154622616118" name="jetbrains.mps.lang.actions.structure.SideTransformHintSubstitutePreconditionFunction" flags="in" index="3kRJcU" />
      <concept id="1138079221458" name="jetbrains.mps.lang.actions.structure.SideTransformHintSubstituteActionsBuilder" flags="ig" index="3UNGvq">
        <reference id="1138079221462" name="applicableConcept" index="3UNGvu" />
        <child id="1177442283389" name="part" index="_1QTJ" />
        <child id="1154622757656" name="precondition" index="3kShCk" />
      </concept>
      <concept id="1138079416598" name="jetbrains.mps.lang.actions.structure.SideTransformHintSubstituteActions" flags="ng" index="3UOs0u">
        <child id="1138079416599" name="actionsBuilder" index="3UOs0v" />
      </concept>
    </language>
    <language id="7866978e-a0f0-4cc7-81bc-4d213d9375e1" name="jetbrains.mps.lang.smodel">
      <concept id="1177026924588" name="jetbrains.mps.lang.smodel.structure.RefConcept_Reference" flags="nn" index="chp4Y">
        <reference id="1177026940964" name="conceptDeclaration" index="cht4Q" />
      </concept>
      <concept id="1139621453865" name="jetbrains.mps.lang.smodel.structure.Node_IsInstanceOfOperation" flags="nn" index="1mIQ4w">
        <child id="1177027386292" name="conceptArgument" index="cj9EA" />
      </concept>
      <concept id="1180636770613" name="jetbrains.mps.lang.smodel.structure.SNodeCreator" flags="nn" index="3zrR0B">
        <child id="1180636770616" name="createdType" index="3zrR0E" />
      </concept>
      <concept id="1140131837776" name="jetbrains.mps.lang.smodel.structure.Node_ReplaceWithAnotherOperation" flags="nn" index="1P9Npp">
        <child id="1140131861877" name="replacementNode" index="1P9ThW" />
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
  <node concept="3UOs0u" id="5zmpEkiBL7V">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="make_TransitionAction" />
    <node concept="3UNGvq" id="5zmpEkiBL7W" role="3UOs0v">
      <ref role="3UNGvu" to="pz83:5zmpEki_6yb" resolve="Transition" />
      <node concept="tYCnQ" id="5zmpEkiBL89" role="_1QTJ">
        <ref role="uz4UX" to="pz83:5zmpEki_6yb" resolve="Transition" />
        <node concept="Cmt7Y" id="5zmpEkiBL8b" role="uz6Si">
          <node concept="Cnhdc" id="5zmpEkiBL8c" role="Cncma">
            <node concept="3clFbS" id="5zmpEkiBL8d" role="2VODD2">
              <node concept="3clFbF" id="5zmpEkiBL8V" role="3cqZAp">
                <node concept="2OqwBi" id="5zmpEkiBLA$" role="3clFbG">
                  <node concept="2OqwBi" id="5zmpEkiBLg4" role="2Oq$k0">
                    <node concept="Cj7Ep" id="5zmpEkiBL8U" role="2Oq$k0" />
                    <node concept="3TrEf2" id="5zmpEkiBLwD" role="2OqNvi">
                      <ref role="3Tt5mk" to="pz83:5zmpEkiAt6c" />
                    </node>
                  </node>
                  <node concept="2DeJnY" id="5zmpEkiBM4k" role="2OqNvi" />
                </node>
              </node>
              <node concept="3clFbF" id="5zmpEkiBMb5" role="3cqZAp">
                <node concept="2OqwBi" id="5zmpEkiBMiq" role="3clFbG">
                  <node concept="Cj7Ep" id="5zmpEkiBMb3" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiBMP5" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiAt6c" />
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2h1dTh" id="5zmpEkiBL8Q" role="Cn2iK">
            <property role="2h1i$Z" value="{" />
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="3UOs0u" id="5zmpEkiF968">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="addEventBinding" />
    <node concept="3UNGvq" id="5zmpEkiF969" role="3UOs0v">
      <ref role="3UNGvu" to="pz83:5zmpEki_6y2" resolve="Event" />
      <node concept="tYCnQ" id="5zmpEkiF96$" role="_1QTJ">
        <ref role="uz4UX" to="pz83:5zmpEki_6y2" resolve="Event" />
        <node concept="Cmt7Y" id="5zmpEkiF96B" role="uz6Si">
          <node concept="Cnhdc" id="5zmpEkiF96C" role="Cncma">
            <node concept="3clFbS" id="5zmpEkiF96D" role="2VODD2">
              <node concept="3clFbJ" id="5zmpEkiF97q" role="3cqZAp">
                <node concept="3clFbC" id="5zmpEkiFa6m" role="3clFbw">
                  <node concept="10Nm6u" id="5zmpEkiFa7m" role="3uHU7w" />
                  <node concept="2OqwBi" id="5zmpEkiF9gD" role="3uHU7B">
                    <node concept="Cj7Ep" id="5zmpEkiF98b" role="2Oq$k0" />
                    <node concept="3TrEf2" id="5zmpEkiF9Nr" role="2OqNvi">
                      <ref role="3Tt5mk" to="pz83:5zmpEki_r4E" />
                    </node>
                  </node>
                </node>
                <node concept="3clFbS" id="5zmpEkiF97s" role="3clFbx">
                  <node concept="3clFbF" id="5zmpEkiFa9N" role="3cqZAp">
                    <node concept="2OqwBi" id="5zmpEkiFaC2" role="3clFbG">
                      <node concept="2OqwBi" id="5zmpEkiFakl" role="2Oq$k0">
                        <node concept="Cj7Ep" id="5zmpEkiFa9M" role="2Oq$k0" />
                        <node concept="3TrEf2" id="5zmpEkiFaA8" role="2OqNvi">
                          <ref role="3Tt5mk" to="pz83:5zmpEki_r4E" />
                        </node>
                      </node>
                      <node concept="2DeJnY" id="5zmpEkiFaK0" role="2OqNvi" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="5zmpEkiFaQe" role="3cqZAp">
                <node concept="2OqwBi" id="5zmpEkiFaYi" role="3clFbG">
                  <node concept="Cj7Ep" id="5zmpEkiFaQc" role="2Oq$k0" />
                  <node concept="3TrEf2" id="5zmpEkiFbxp" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEki_r4E" />
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2h1dTh" id="5zmpEkiF97i" role="Cn2iK">
            <property role="2h1i$Z" value="=" />
          </node>
          <node concept="2h1dTh" id="5zmpEkiF97m" role="Cn6ar">
            <property role="2h1i$Z" value="add binding" />
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="3UOs0u" id="4CfWYHsfXwu">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="make_RegionLocalDecl" />
    <node concept="3UNGvq" id="4CfWYHsfXw_" role="3UOs0v">
      <ref role="3UNGvu" to="c4fa:3CmSUB7FprA" resolve="LocalVariableDeclaration" />
      <node concept="3kRJcU" id="4CfWYHsfXwB" role="3kShCk">
        <node concept="3clFbS" id="4CfWYHsfXwC" role="2VODD2">
          <node concept="3clFbF" id="4CfWYHsfXxH" role="3cqZAp">
            <node concept="2OqwBi" id="4CfWYHsfYty" role="3clFbG">
              <node concept="2OqwBi" id="4CfWYHsfXIB" role="2Oq$k0">
                <node concept="Cj7Ep" id="4CfWYHsfXxG" role="2Oq$k0" />
                <node concept="3TrEf2" id="4CfWYHsfY4v" role="2OqNvi">
                  <ref role="3Tt5mk" to="mj1l:hEaDaGor64" />
                </node>
              </node>
              <node concept="1mIQ4w" id="4CfWYHsfYIy" role="2OqNvi">
                <node concept="chp4Y" id="4CfWYHsfYNX" role="cj9EA">
                  <ref role="cht4Q" to="pz83:5zmpEki_6xT" resolve="RegionType" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
      <node concept="tYCnQ" id="4CfWYHsfYTR" role="_1QTJ">
        <ref role="uz4UX" to="pz83:5zmpEki_6y6" resolve="RegionLocalDeclaration" />
        <node concept="Cmt7Y" id="4CfWYHsfZ5x" role="uz6Si">
          <node concept="Cnhdc" id="4CfWYHsfZ5y" role="Cncma">
            <node concept="3clFbS" id="4CfWYHsfZ5z" role="2VODD2">
              <node concept="3cpWs8" id="4CfWYHsfZ6f" role="3cqZAp">
                <node concept="3cpWsn" id="4CfWYHsfZ6i" role="3cpWs9">
                  <property role="TrG5h" value="var" />
                  <node concept="3Tqbb2" id="4CfWYHsfZ6e" role="1tU5fm">
                    <ref role="ehGHo" to="pz83:5zmpEki_6y6" resolve="RegionLocalDeclaration" />
                  </node>
                  <node concept="2ShNRf" id="4CfWYHsfZ8u" role="33vP2m">
                    <node concept="3zrR0B" id="4CfWYHsg0ep" role="2ShVmc">
                      <node concept="3Tqbb2" id="4CfWYHsg0er" role="3zrR0E">
                        <ref role="ehGHo" to="pz83:5zmpEki_6y6" resolve="RegionLocalDeclaration" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsg0gD" role="3cqZAp">
                <node concept="37vLTI" id="4CfWYHsg139" role="3clFbG">
                  <node concept="2OqwBi" id="4CfWYHsg1jc" role="37vLTx">
                    <node concept="Cj7Ep" id="4CfWYHsg14r" role="2Oq$k0" />
                    <node concept="3TrcHB" id="4CfWYHsg21S" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                  <node concept="2OqwBi" id="4CfWYHsg0t$" role="37vLTJ">
                    <node concept="37vLTw" id="4CfWYHsg0gB" role="2Oq$k0">
                      <ref role="3cqZAo" node="4CfWYHsfZ6i" resolve="var" />
                    </node>
                    <node concept="3TrcHB" id="4CfWYHsg0Ws" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsg2cK" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsg2qW" role="3clFbG">
                  <node concept="Cj7Ep" id="4CfWYHsg2cI" role="2Oq$k0" />
                  <node concept="1P9Npp" id="4CfWYHsg3a0" role="2OqNvi">
                    <node concept="37vLTw" id="4CfWYHsg3fl" role="1P9ThW">
                      <ref role="3cqZAo" node="4CfWYHsfZ6i" resolve="var" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsg3qS" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsg3Gc" role="3clFbG">
                  <node concept="37vLTw" id="4CfWYHsg3qQ" role="2Oq$k0">
                    <ref role="3cqZAo" node="4CfWYHsfZ6i" resolve="var" />
                  </node>
                  <node concept="3TrEf2" id="4CfWYHsg4TW" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiA3uD" />
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2h1dTh" id="4CfWYHsfZ6c" role="Cn2iK">
            <property role="2h1i$Z" value="{" />
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="3UOs0u" id="4CfWYHsg51x">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="make_SMDecl" />
    <node concept="3UNGvq" id="4CfWYHsg51C" role="3UOs0v">
      <ref role="3UNGvu" to="x27k:5IYyAOzCrre" resolve="GlobalVariableDeclaration" />
      <node concept="tYCnQ" id="4CfWYHsg6Fm" role="_1QTJ">
        <ref role="uz4UX" to="pz83:5zmpEki_6xY" resolve="SMGlobalDeclaration" />
        <node concept="Cmt7Y" id="4CfWYHsg6Sx" role="uz6Si">
          <node concept="Cnhdc" id="4CfWYHsg6Sy" role="Cncma">
            <node concept="3clFbS" id="4CfWYHsg6Sz" role="2VODD2">
              <node concept="3cpWs8" id="4CfWYHsg6Th" role="3cqZAp">
                <node concept="3cpWsn" id="4CfWYHsg6Tk" role="3cpWs9">
                  <property role="TrG5h" value="var" />
                  <node concept="3Tqbb2" id="4CfWYHsg6Tg" role="1tU5fm">
                    <ref role="ehGHo" to="pz83:5zmpEki_6xY" resolve="SMGlobalDeclaration" />
                  </node>
                  <node concept="2ShNRf" id="4CfWYHsg6UN" role="33vP2m">
                    <node concept="3zrR0B" id="4CfWYHsg71x" role="2ShVmc">
                      <node concept="3Tqbb2" id="4CfWYHsg71z" role="3zrR0E">
                        <ref role="ehGHo" to="pz83:5zmpEki_6xY" resolve="SMGlobalDeclaration" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsg73L" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsg7fG" role="3clFbG">
                  <node concept="Cj7Ep" id="4CfWYHsg73J" role="2Oq$k0" />
                  <node concept="1P9Npp" id="4CfWYHsg82m" role="2OqNvi">
                    <node concept="37vLTw" id="4CfWYHsg835" role="1P9ThW">
                      <ref role="3cqZAo" node="4CfWYHsg6Tk" resolve="var" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsg88K" role="3cqZAp">
                <node concept="37vLTI" id="4CfWYHsg8Cy" role="3clFbG">
                  <node concept="2OqwBi" id="4CfWYHsg8YG" role="37vLTx">
                    <node concept="Cj7Ep" id="4CfWYHsg8HT" role="2Oq$k0" />
                    <node concept="3TrcHB" id="4CfWYHsg9Pq" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                  <node concept="2OqwBi" id="4CfWYHsg8iF" role="37vLTJ">
                    <node concept="37vLTw" id="4CfWYHsg88I" role="2Oq$k0">
                      <ref role="3cqZAo" node="4CfWYHsg6Tk" resolve="var" />
                    </node>
                    <node concept="3TrcHB" id="4CfWYHsg8_v" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsga44" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsgaep" role="3clFbG">
                  <node concept="37vLTw" id="4CfWYHsga42" role="2Oq$k0">
                    <ref role="3cqZAo" node="4CfWYHsg6Tk" resolve="var" />
                  </node>
                  <node concept="3TrEf2" id="4CfWYHsgaxv" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEki_aHv" />
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2h1dTh" id="4CfWYHsg6Tc" role="Cn2iK">
            <property role="2h1i$Z" value="{" />
          </node>
        </node>
      </node>
      <node concept="3kRJcU" id="4CfWYHsg51E" role="3kShCk">
        <node concept="3clFbS" id="4CfWYHsg51F" role="2VODD2">
          <node concept="3clFbF" id="4CfWYHsg52K" role="3cqZAp">
            <node concept="2OqwBi" id="4CfWYHsg66b" role="3clFbG">
              <node concept="2OqwBi" id="4CfWYHsg5f$" role="2Oq$k0">
                <node concept="Cj7Ep" id="4CfWYHsg52J" role="2Oq$k0" />
                <node concept="3TrEf2" id="4CfWYHsg5Di" role="2OqNvi">
                  <ref role="3Tt5mk" to="mj1l:hEaDaGor64" />
                </node>
              </node>
              <node concept="1mIQ4w" id="4CfWYHsg6nV" role="2OqNvi">
                <node concept="chp4Y" id="4CfWYHsg6u6" role="cj9EA">
                  <ref role="cht4Q" to="pz83:5zmpEki_6xV" resolve="SMType" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
  <node concept="3UOs0u" id="4CfWYHsgaDO">
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="make_StateLocalDecl" />
    <node concept="3UNGvq" id="4CfWYHsgaDV" role="3UOs0v">
      <ref role="3UNGvu" to="c4fa:3CmSUB7FprA" resolve="LocalVariableDeclaration" />
      <node concept="tYCnQ" id="4CfWYHsgc93" role="_1QTJ">
        <ref role="uz4UX" to="pz83:5zmpEki_6ya" resolve="StateLocalDeclaration" />
        <node concept="Cmt7Y" id="4CfWYHsgckI" role="uz6Si">
          <node concept="Cnhdc" id="4CfWYHsgckJ" role="Cncma">
            <node concept="3clFbS" id="4CfWYHsgckK" role="2VODD2">
              <node concept="3cpWs8" id="4CfWYHsgclu" role="3cqZAp">
                <node concept="3cpWsn" id="4CfWYHsgclx" role="3cpWs9">
                  <property role="TrG5h" value="var" />
                  <node concept="3Tqbb2" id="4CfWYHsgclt" role="1tU5fm">
                    <ref role="ehGHo" to="pz83:5zmpEki_6ya" resolve="StateLocalDeclaration" />
                  </node>
                  <node concept="2ShNRf" id="4CfWYHsgcnX" role="33vP2m">
                    <node concept="3zrR0B" id="4CfWYHsgcuF" role="2ShVmc">
                      <node concept="3Tqbb2" id="4CfWYHsgcuH" role="3zrR0E">
                        <ref role="ehGHo" to="pz83:5zmpEki_6ya" resolve="StateLocalDeclaration" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsgcwV" role="3cqZAp">
                <node concept="37vLTI" id="4CfWYHsgdhH" role="3clFbG">
                  <node concept="2OqwBi" id="4CfWYHsgdxE" role="37vLTx">
                    <node concept="Cj7Ep" id="4CfWYHsgdmC" role="2Oq$k0" />
                    <node concept="3TrcHB" id="4CfWYHsgegg" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                  <node concept="2OqwBi" id="4CfWYHsgcHu" role="37vLTJ">
                    <node concept="37vLTw" id="4CfWYHsgcwT" role="2Oq$k0">
                      <ref role="3cqZAo" node="4CfWYHsgclx" resolve="var" />
                    </node>
                    <node concept="3TrcHB" id="4CfWYHsgdb6" role="2OqNvi">
                      <ref role="3TsBF5" to="tpck:h0TrG11" resolve="name" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsgeqY" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsgeD5" role="3clFbG">
                  <node concept="Cj7Ep" id="4CfWYHsgeqW" role="2Oq$k0" />
                  <node concept="1P9Npp" id="4CfWYHsgfo4" role="2OqNvi">
                    <node concept="37vLTw" id="4CfWYHsgfp5" role="1P9ThW">
                      <ref role="3cqZAo" node="4CfWYHsgclx" resolve="var" />
                    </node>
                  </node>
                </node>
              </node>
              <node concept="3clFbF" id="4CfWYHsgf$s" role="3cqZAp">
                <node concept="2OqwBi" id="4CfWYHsgfPj" role="3clFbG">
                  <node concept="37vLTw" id="4CfWYHsgf$q" role="2Oq$k0">
                    <ref role="3cqZAo" node="4CfWYHsgclx" resolve="var" />
                  </node>
                  <node concept="3TrEf2" id="4CfWYHsggOl" role="2OqNvi">
                    <ref role="3Tt5mk" to="pz83:5zmpEkiAhfS" />
                  </node>
                </node>
              </node>
            </node>
          </node>
          <node concept="2h1dTh" id="4CfWYHsgclp" role="Cn2iK">
            <property role="2h1i$Z" value="{" />
          </node>
        </node>
      </node>
      <node concept="3kRJcU" id="4CfWYHsgaDX" role="3kShCk">
        <node concept="3clFbS" id="4CfWYHsgaDY" role="2VODD2">
          <node concept="3clFbF" id="4CfWYHsgaF3" role="3cqZAp">
            <node concept="2OqwBi" id="4CfWYHsgbAS" role="3clFbG">
              <node concept="2OqwBi" id="4CfWYHsgaRX" role="2Oq$k0">
                <node concept="Cj7Ep" id="4CfWYHsgaF2" role="2Oq$k0" />
                <node concept="3TrEf2" id="4CfWYHsgbdP" role="2OqNvi">
                  <ref role="3Tt5mk" to="mj1l:hEaDaGor64" />
                </node>
              </node>
              <node concept="1mIQ4w" id="4CfWYHsgbRS" role="2OqNvi">
                <node concept="chp4Y" id="4CfWYHsgbXj" role="cj9EA">
                  <ref role="cht4Q" to="pz83:5zmpEki_6xU" resolve="StateType" />
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
  </node>
</model>

