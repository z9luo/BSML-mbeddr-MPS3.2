<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:db81e786-b1e9-4de0-bf44-e4204ced8ed5(BSML.structure)">
  <persistence version="9" />
  <languages>
    <use id="c72da2b9-7cce-4447-8389-f407dc1158b7" name="jetbrains.mps.lang.structure" version="1" />
    <devkit ref="fbc25dd2-5da4-483a-8b19-70928e1b62d7(jetbrains.mps.devkit.general-purpose)" />
  </languages>
  <imports>
    <import index="tpck" ref="r:00000000-0000-4000-0000-011c89590288(jetbrains.mps.lang.core.structure)" implicit="true" />
    <import index="vs0r" ref="r:f7764ca4-8c75-4049-922b-08516400a727(com.mbeddr.core.base.structure)" implicit="true" />
    <import index="mj1l" ref="r:c371cf98-dcc8-4a43-8eb8-8a8096de18b2(com.mbeddr.core.expressions.structure)" implicit="true" />
    <import index="x27k" ref="r:75ecab8a-8931-4140-afc6-4b46398710fc(com.mbeddr.core.modules.structure)" implicit="true" />
    <import index="tpee" ref="r:00000000-0000-4000-0000-011c895902ca(jetbrains.mps.baseLanguage.structure)" implicit="true" />
    <import index="c4fa" ref="r:9f0e84b6-2ec7-4f9e-83e0-feedc77b63a3(com.mbeddr.core.statements.structure)" implicit="true" />
  </imports>
  <registry>
    <language id="c72da2b9-7cce-4447-8389-f407dc1158b7" name="jetbrains.mps.lang.structure">
      <concept id="6054523464627964745" name="jetbrains.mps.lang.structure.structure.AttributeInfo_AttributedConcept" flags="ng" index="trNpa">
        <reference id="6054523464627965081" name="concept" index="trN6q" />
      </concept>
      <concept id="1082978164219" name="jetbrains.mps.lang.structure.structure.EnumerationDataTypeDeclaration" flags="ng" index="AxPO7">
        <property id="1197591154882" name="memberIdentifierPolicy" index="3lZH7k" />
        <reference id="1083171729157" name="memberDataType" index="M4eZT" />
        <reference id="1083241965437" name="defaultMember" index="Qgau1" />
        <child id="1083172003582" name="member" index="M5hS2" />
      </concept>
      <concept id="1083171877298" name="jetbrains.mps.lang.structure.structure.EnumerationMemberDeclaration" flags="ig" index="M4N5e">
        <property id="1083923523172" name="externalValue" index="1uS6qo" />
        <property id="1083923523171" name="internalValue" index="1uS6qv" />
      </concept>
      <concept id="2992811758677295509" name="jetbrains.mps.lang.structure.structure.AttributeInfo" flags="ng" index="M6xJ_">
        <property id="7588428831955550663" name="role" index="Hh88m" />
        <child id="7588428831947959310" name="attributed" index="EQaZv" />
      </concept>
      <concept id="1169125787135" name="jetbrains.mps.lang.structure.structure.AbstractConceptDeclaration" flags="ig" index="PkWjJ">
        <property id="4628067390765907488" name="conceptShortDescription" index="R4oN_" />
        <property id="5092175715804935370" name="conceptAlias" index="34LRSv" />
        <property id="1587916991969465369" name="conceptId" index="1pbfSe" />
        <child id="1071489727083" name="linkDeclaration" index="1TKVEi" />
        <child id="1071489727084" name="propertyDeclaration" index="1TKVEl" />
      </concept>
      <concept id="1169125989551" name="jetbrains.mps.lang.structure.structure.InterfaceConceptDeclaration" flags="ig" index="PlHQZ">
        <child id="1169127546356" name="extends" index="PrDN$" />
      </concept>
      <concept id="1169127622168" name="jetbrains.mps.lang.structure.structure.InterfaceConceptReference" flags="ig" index="PrWs8">
        <reference id="1169127628841" name="intfc" index="PrY4T" />
      </concept>
      <concept id="1071489090640" name="jetbrains.mps.lang.structure.structure.ConceptDeclaration" flags="ig" index="1TIwiD">
        <reference id="1071489389519" name="extends" index="1TJDcQ" />
        <child id="1169129564478" name="implements" index="PzmwI" />
      </concept>
      <concept id="1071489288299" name="jetbrains.mps.lang.structure.structure.PropertyDeclaration" flags="ig" index="1TJgyi">
        <reference id="1082985295845" name="dataType" index="AX2Wp" />
      </concept>
      <concept id="1071489288298" name="jetbrains.mps.lang.structure.structure.LinkDeclaration" flags="ig" index="1TJgyj">
        <property id="1071599776563" name="role" index="20kJfa" />
        <property id="1071599893252" name="sourceCardinality" index="20lbJX" />
        <property id="1071599937831" name="metaClass" index="20lmBu" />
        <reference id="1071599976176" name="target" index="20lvS9" />
      </concept>
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1133920641626" name="jetbrains.mps.lang.core.structure.BaseConcept" flags="ng" index="2VYdi">
        <property id="1193676396447" name="virtualPackage" index="3GE5qa" />
        <child id="5169995583184591170" name="smodelAttribute" index="lGtFl" />
      </concept>
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
  </registry>
  <node concept="AxPO7" id="5zmpEki$okN">
    <property role="TrG5h" value="EventLifelineEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$okO" />
    <node concept="M4N5e" id="5zmpEki$okO" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="PRESENT IN REMAINDER" />
    </node>
    <node concept="M4N5e" id="5zmpEki$okP" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="PRESENT IN NEXT SMALL" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$okW">
    <property role="TrG5h" value="ConcurrencyEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$okY" />
    <node concept="M4N5e" id="5zmpEki$okX" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="SINGLE" />
    </node>
    <node concept="M4N5e" id="5zmpEki$okY" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="MANY" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$ol0">
    <property role="TrG5h" value="HierPriorityRegionEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$ol1" />
    <node concept="M4N5e" id="5zmpEki$ol1" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="SCOPE" />
    </node>
    <node concept="M4N5e" id="5zmpEki$ol2" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="SOURCE" />
    </node>
    <node concept="M4N5e" id="5zmpEki$ol3" role="M5hS2">
      <property role="1uS6qv" value="2" />
      <property role="1uS6qo" value="TARGET" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$ol4">
    <property role="TrG5h" value="HierPrioritySchemeEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$ol5" />
    <node concept="M4N5e" id="5zmpEki$ol5" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="PARENT" />
    </node>
    <node concept="M4N5e" id="5zmpEki$ol6" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="CHILD" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$ol8">
    <property role="TrG5h" value="BigStepMaximalityEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$ola" />
    <node concept="M4N5e" id="5zmpEki$ol9" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="TAKE ONE" />
    </node>
    <node concept="M4N5e" id="5zmpEki$ola" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="TAKE MANY" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olb" role="M5hS2">
      <property role="1uS6qv" value="2" />
      <property role="1uS6qo" value="SYNTACTIC" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$olI">
    <property role="TrG5h" value="InEventEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$olJ" />
    <node concept="M4N5e" id="5zmpEki$olJ" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="RECEIVED IN FIRST SMALL" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olK" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="SYNTACTIC" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olU" role="M5hS2">
      <property role="1uS6qo" value="HYBRID" />
      <property role="1uS6qv" value="2" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$olL">
    <property role="TrG5h" value="MemoryProtocolEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$olM" />
    <node concept="M4N5e" id="5zmpEki$olM" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="SMALL STEP" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olN" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="BIG STEP" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$olO">
    <property role="TrG5h" value="OutEventEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$olP" />
    <node concept="M4N5e" id="5zmpEki$olP" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="SYNTACTIC" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olQ" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="GENERATED IN LAST SMALL" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olY" role="M5hS2">
      <property role="1uS6qv" value="2" />
      <property role="1uS6qo" value="HYBRID" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$olR">
    <property role="TrG5h" value="PreemptionEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$olS" />
    <node concept="M4N5e" id="5zmpEki$olS" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="PREEMPTIVE" />
    </node>
    <node concept="M4N5e" id="5zmpEki$olT" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="NON-PREEMPTIVE" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$om2">
    <property role="TrG5h" value="PriorityEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$om3" />
    <node concept="M4N5e" id="5zmpEki$om3" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="HIERARCHICAL" />
    </node>
    <node concept="M4N5e" id="5zmpEki$om4" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="EXPLICIT" />
    </node>
  </node>
  <node concept="AxPO7" id="5zmpEki$om5">
    <property role="TrG5h" value="SmallStepConsistencyEnum" />
    <property role="3lZH7k" value="derive_from_internal_value" />
    <property role="3GE5qa" value="config" />
    <ref role="M4eZT" to="tpck:fKAQMTA" resolve="integer" />
    <ref role="Qgau1" node="5zmpEki$om7" />
    <node concept="M4N5e" id="5zmpEki$om6" role="M5hS2">
      <property role="1uS6qv" value="0" />
      <property role="1uS6qo" value="SOURCE/TARGET ORTHOGONAL" />
    </node>
    <node concept="M4N5e" id="5zmpEki$om7" role="M5hS2">
      <property role="1uS6qv" value="1" />
      <property role="1uS6qo" value="ARENA ORTHOGONAL" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki$om8">
    <property role="1pbfSe" value="1801972781" />
    <property role="TrG5h" value="StateMachineConfigItem" />
    <property role="34LRSv" value="state-machine semantics" />
    <property role="3GE5qa" value="config" />
    <ref role="1TJDcQ" to="tpck:gw2VY9q" resolve="BaseConcept" />
    <node concept="PrWs8" id="5zmpEki$om9" role="PzmwI">
      <ref role="PrY4T" to="vs0r:3R$6B6bKw0C" resolve="IConfigurationItem" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omb" role="1TKVEl">
      <property role="TrG5h" value="bigStepMaximality" />
      <ref role="AX2Wp" node="5zmpEki$ol8" resolve="BigStepMaximalityEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omd" role="1TKVEl">
      <property role="TrG5h" value="concurrency" />
      <ref role="AX2Wp" node="5zmpEki$okW" resolve="ConcurrencyEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omg" role="1TKVEl">
      <property role="TrG5h" value="externalInEvent" />
      <ref role="AX2Wp" node="5zmpEki$olI" resolve="InEventEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omk" role="1TKVEl">
      <property role="TrG5h" value="inEventLifeline" />
      <ref role="AX2Wp" node="5zmpEki$okN" resolve="EventLifelineEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omp" role="1TKVEl">
      <property role="TrG5h" value="internalEventLifeline" />
      <ref role="AX2Wp" node="5zmpEki$okN" resolve="EventLifelineEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omv" role="1TKVEl">
      <property role="TrG5h" value="externalOutEvent" />
      <ref role="AX2Wp" node="5zmpEki$olO" resolve="OutEventEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omA" role="1TKVEl">
      <property role="TrG5h" value="outEventLifeline" />
      <ref role="AX2Wp" node="5zmpEki$okN" resolve="EventLifelineEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omI" role="1TKVEl">
      <property role="TrG5h" value="preemption" />
      <ref role="AX2Wp" node="5zmpEki$olR" resolve="PreemptionEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$omR" role="1TKVEl">
      <property role="TrG5h" value="priority" />
      <ref role="AX2Wp" node="5zmpEki$om2" resolve="PriorityEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$on1" role="1TKVEl">
      <property role="TrG5h" value="hierPrioRegion" />
      <ref role="AX2Wp" node="5zmpEki$ol0" resolve="HierPriorityRegionEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$onc" role="1TKVEl">
      <property role="TrG5h" value="hierPrioScheme" />
      <ref role="AX2Wp" node="5zmpEki$ol4" resolve="HierPrioritySchemeEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$ono" role="1TKVEl">
      <property role="TrG5h" value="smallStepConsistency" />
      <ref role="AX2Wp" node="5zmpEki$om5" resolve="SmallStepConsistencyEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$on_" role="1TKVEl">
      <property role="TrG5h" value="GC" />
      <ref role="AX2Wp" node="5zmpEki$olL" resolve="MemoryProtocolEnum" />
    </node>
    <node concept="1TJgyi" id="5zmpEki$onN" role="1TKVEl">
      <property role="TrG5h" value="RHS" />
      <ref role="AX2Wp" node="5zmpEki$olL" resolve="MemoryProtocolEnum" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6xT">
    <property role="1pbfSe" value="1802161950" />
    <property role="TrG5h" value="RegionType" />
    <property role="34LRSv" value="region" />
    <property role="3GE5qa" value="types" />
    <ref role="1TJDcQ" to="mj1l:7FQByU3CrCQ" resolve="Type" />
  </node>
  <node concept="1TIwiD" id="5zmpEki_6xU">
    <property role="1pbfSe" value="1802161951" />
    <property role="3GE5qa" value="types" />
    <property role="TrG5h" value="StateType" />
    <property role="34LRSv" value="state" />
    <ref role="1TJDcQ" to="mj1l:7FQByU3CrCQ" resolve="Type" />
  </node>
  <node concept="1TIwiD" id="5zmpEki_6xV">
    <property role="1pbfSe" value="1802161952" />
    <property role="3GE5qa" value="types" />
    <property role="TrG5h" value="SMType" />
    <property role="R4oN_" value="sm_handle" />
    <ref role="1TJDcQ" to="mj1l:7FQByU3CrCQ" resolve="Type" />
    <node concept="1TJgyj" id="5zmpEki_6xW" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="sm_ref" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6xY" resolve="SMGlobalDeclaration" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6xY">
    <property role="1pbfSe" value="1802161955" />
    <property role="TrG5h" value="SMGlobalDeclaration" />
    <property role="3GE5qa" value="entities" />
    <property role="34LRSv" value="statemachine" />
    <ref role="1TJDcQ" to="tpck:gw2VY9q" resolve="BaseConcept" />
    <node concept="PrWs8" id="5zmpEki_82k" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6zd" resolve="IStateMachine" />
    </node>
    <node concept="PrWs8" id="5zmpEki_aH7" role="PzmwI">
      <ref role="PrY4T" to="x27k:5_l8w1EmTdf" resolve="IModuleContent" />
    </node>
    <node concept="PrWs8" id="5zmpEki_aHf" role="PzmwI">
      <ref role="PrY4T" to="tpee:i0zv2NF" resolve="IContainsStatementList" />
    </node>
    <node concept="PrWs8" id="5zmpEki_aHp" role="PzmwI">
      <ref role="PrY4T" to="vs0r:6clJcrJXo2z" resolve="IVisibleElementProvider" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_aHv" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="content" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="c4fa:3CmSUB7Fp_l" resolve="StatementList" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6xZ">
    <property role="1pbfSe" value="1802161956" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="AbstractBlock" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="PrWs8" id="5zmpEki_njv" role="PzmwI">
      <ref role="PrY4T" to="tpee:i0zv2NF" resolve="IContainsStatementList" />
    </node>
    <node concept="PrWs8" id="5zmpEki_nj$" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6z9" resolve="ISMElement" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_njC" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="content" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="c4fa:3CmSUB7Fp_l" resolve="StatementList" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y0">
    <property role="1pbfSe" value="1802161957" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="EndBigStepBlock" />
    <property role="34LRSv" value="end" />
    <ref role="1TJDcQ" node="5zmpEki_6xZ" resolve="AbstractBlock" />
    <node concept="PrWs8" id="5zmpEki_nk2" role="PzmwI">
      <ref role="PrY4T" to="vs0r:6clJcrJXo2z" resolve="IVisibleElementProvider" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y1">
    <property role="1pbfSe" value="1802161958" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="EntryBlock" />
    <property role="34LRSv" value="entry" />
    <ref role="1TJDcQ" node="5zmpEki_6xZ" resolve="AbstractBlock" />
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y2">
    <property role="1pbfSe" value="1802161959" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="Event" />
    <property role="34LRSv" value="event" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="PrWs8" id="5zmpEki_r4o" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6z0" resolve="IEvent" />
    </node>
    <node concept="PrWs8" id="5zmpEki_r4t" role="PzmwI">
      <ref role="PrY4T" to="vs0r:4qSf1u1TQeO" resolve="IContainerOfUniqueNames" />
    </node>
    <node concept="1TJgyi" id="5zmpEki_r4x" role="1TKVEl">
      <property role="TrG5h" value="in_event" />
      <ref role="AX2Wp" to="tpck:fKAQMTB" resolve="boolean" />
    </node>
    <node concept="1TJgyi" id="5zmpEki_r4z" role="1TKVEl">
      <property role="TrG5h" value="rendezvous" />
      <ref role="AX2Wp" to="tpck:fKAQMTB" resolve="boolean" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_r4C" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="args" />
      <property role="20lbJX" value="0..n" />
      <ref role="20lvS9" to="x27k:7kKaL9x4DZT" resolve="IArgumentLike" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_r4E" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="binding" />
      <ref role="20lvS9" node="5zmpEki_6yd" resolve="CFunctionBinding" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y3">
    <property role="1pbfSe" value="1802161960" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="EventArgRef" />
    <ref role="1TJDcQ" to="x27k:1OcdQnyTX2U" resolve="ArgumentRef" />
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y4">
    <property role="1pbfSe" value="1802161961" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="EventCall" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="PrWs8" id="5zmpEki_D0v" role="PzmwI">
      <ref role="PrY4T" to="x27k:6WGVxckB05U" resolve="ICallLike" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_D0x" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="actuals" />
      <property role="20lbJX" value="0..n" />
      <ref role="20lvS9" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    </node>
    <node concept="1TJgyj" id="5zmpEki_D0z" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="event_ref" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6z0" resolve="IEvent" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y5">
    <property role="1pbfSe" value="1802161962" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="PriorityAnnotation" />
    <ref role="1TJDcQ" to="tpck:2ULFgo8_XDk" resolve="NodeAttribute" />
    <node concept="M6xJ_" id="5zmpEki_TOA" role="lGtFl">
      <property role="Hh88m" value="priority" />
      <node concept="trNpa" id="5zmpEki_TOC" role="EQaZv">
        <ref role="trN6q" node="5zmpEki_6yb" resolve="Transition" />
      </node>
    </node>
    <node concept="1TJgyi" id="5zmpEki_TOE" role="1TKVEl">
      <property role="TrG5h" value="prio" />
      <ref role="AX2Wp" to="tpck:fKAQMTA" resolve="integer" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y6">
    <property role="1pbfSe" value="1802161963" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="RegionLocalDeclaration" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FprA" resolve="LocalVariableDeclaration" />
    <node concept="PrWs8" id="5zmpEkiA3ul" role="PzmwI">
      <ref role="PrY4T" to="tpck:1_TrU5E6oyb" resolve="IDontSubstituteByDefault" />
    </node>
    <node concept="PrWs8" id="5zmpEkiA3uq" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6z8" resolve="IRegion" />
    </node>
    <node concept="PrWs8" id="5zmpEkiA3uy" role="PzmwI">
      <ref role="PrY4T" to="tpee:i0zv2NF" resolve="IContainsStatementList" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiA3uB" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="content" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="c4fa:3CmSUB7Fp_l" resolve="StatementList" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiA3uD" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="initState" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6zc" resolve="IState" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y7">
    <property role="1pbfSe" value="1802161964" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="SMElementPair" />
    <ref role="1TJDcQ" to="tpck:gw2VY9q" resolve="BaseConcept" />
    <node concept="1TJgyj" id="5zmpEkiAg3a" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="r1" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAg3c" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="r2" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y8">
    <property role="1pbfSe" value="1802161965" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="SMFunctionAttribute" />
    <ref role="1TJDcQ" to="tpck:2ULFgo8_XDk" resolve="NodeAttribute" />
    <node concept="M6xJ_" id="5zmpEkiAg3l" role="lGtFl">
      <property role="Hh88m" value="sm_func" />
      <node concept="trNpa" id="5zmpEkiAg3n" role="EQaZv">
        <ref role="trN6q" to="x27k:5_l8w1EmTvt" resolve="FunctionSignature" />
      </node>
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6y9">
    <property role="1pbfSe" value="1802161966" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="StartBigStepBlock" />
    <property role="34LRSv" value="start" />
    <ref role="1TJDcQ" node="5zmpEki_6xZ" resolve="AbstractBlock" />
    <node concept="PrWs8" id="5zmpEkiAg4o" role="PzmwI">
      <ref role="PrY4T" to="vs0r:6clJcrJXo2z" resolve="IVisibleElementProvider" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6ya">
    <property role="1pbfSe" value="1802161967" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="StateLocalDeclaration" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FprA" resolve="LocalVariableDeclaration" />
    <node concept="PrWs8" id="5zmpEkiAhf$" role="PzmwI">
      <ref role="PrY4T" to="tpck:1_TrU5E6oyb" resolve="IDontSubstituteByDefault" />
    </node>
    <node concept="PrWs8" id="5zmpEkiAhfD" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6zc" resolve="IState" />
    </node>
    <node concept="PrWs8" id="5zmpEkiAhfL" role="PzmwI">
      <ref role="PrY4T" to="tpee:i0zv2NF" resolve="IContainsStatementList" />
    </node>
    <node concept="1TJgyi" id="5zmpEkiAhfQ" role="1TKVEl">
      <property role="TrG5h" value="stable" />
      <ref role="AX2Wp" to="tpck:fKAQMTB" resolve="boolean" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAhfS" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="content" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="c4fa:3CmSUB7Fp_l" resolve="StatementList" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yb">
    <property role="1pbfSe" value="1802161968" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="Transition" />
    <property role="34LRSv" value="transition" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="PrWs8" id="5zmpEkiAt68" role="PzmwI">
      <ref role="PrY4T" node="5zmpEki_6ze" resolve="ITransition" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAt6a" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="guard" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAt6c" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="action" />
      <ref role="20lvS9" to="c4fa:3CmSUB7Fp_l" resolve="StatementList" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAt6f" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="triggers" />
      <property role="20lbJX" value="0..n" />
      <ref role="20lvS9" node="5zmpEki_6yc" resolve="TriggerEventRef" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAt6j" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="source" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6zc" resolve="IState" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAt6o" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="target" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6zc" resolve="IState" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yc">
    <property role="1pbfSe" value="1802161969" />
    <property role="3GE5qa" value="entities" />
    <property role="TrG5h" value="TriggerEventRef" />
    <ref role="1TJDcQ" to="tpck:gw2VY9q" resolve="BaseConcept" />
    <node concept="PrWs8" id="5zmpEkiA$Bm" role="PzmwI">
      <ref role="PrY4T" to="tpck:h0TrEE$" resolve="INamedConcept" />
    </node>
    <node concept="PrWs8" id="5zmpEkiA$Br" role="PzmwI">
      <ref role="PrY4T" to="vs0r:70kXLV4LLzw" resolve="IReference" />
    </node>
    <node concept="1TJgyi" id="5zmpEkiA$Bv" role="1TKVEl">
      <property role="TrG5h" value="negation" />
      <ref role="AX2Wp" to="tpck:fKAQMTB" resolve="boolean" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiA$Bx" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="var" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6z0" resolve="IEvent" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yd">
    <property role="1pbfSe" value="1802161970" />
    <property role="TrG5h" value="CFunctionBinding" />
    <property role="3GE5qa" value="engine" />
    <property role="R4oN_" value="reference to a C function" />
    <ref role="1TJDcQ" to="tpck:gw2VY9q" resolve="BaseConcept" />
    <node concept="1TJgyj" id="5zmpEkiAHG4" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="binding" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="x27k:5_l8w1EmTvt" resolve="FunctionSignature" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6ye">
    <property role="1pbfSe" value="1802161971" />
    <property role="3GE5qa" value="engine" />
    <property role="TrG5h" value="SMGenEvent" />
    <ref role="1TJDcQ" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    <node concept="PrWs8" id="5zmpEkiAHGX" role="PzmwI">
      <ref role="PrY4T" to="x27k:6WGVxckB05U" resolve="ICallLike" />
    </node>
    <node concept="PrWs8" id="5zmpEkiAHH2" role="PzmwI">
      <ref role="PrY4T" to="vs0r:70kXLV4LLzw" resolve="IReference" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAHH6" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="actuals" />
      <property role="20lbJX" value="0..n" />
      <ref role="20lvS9" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAHH8" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="event_ref" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6z0" resolve="IEvent" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yf">
    <property role="1pbfSe" value="1802161972" />
    <property role="3GE5qa" value="engine" />
    <property role="TrG5h" value="SMStart" />
    <property role="34LRSv" value="sm_start" />
    <ref role="1TJDcQ" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    <node concept="PrWs8" id="5zmpEkiAYFP" role="PzmwI">
      <ref role="PrY4T" to="mj1l:4usdeMNUjj3" resolve="IRequiresTypeToBeInferred" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAYFR" role="1TKVEi">
      <property role="20lmBu" value="reference" />
      <property role="20kJfa" value="sm_ref" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" node="5zmpEki_6xY" resolve="SMGlobalDeclaration" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yg">
    <property role="1pbfSe" value="1802161973" />
    <property role="3GE5qa" value="engine" />
    <property role="TrG5h" value="SMTerminate" />
    <property role="34LRSv" value="sm_terminate" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="1TJgyj" id="5zmpEkiAYK_" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="sm_handle" />
      <property role="20lbJX" value="1" />
      <ref role="20lvS9" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    </node>
  </node>
  <node concept="1TIwiD" id="5zmpEki_6yh">
    <property role="1pbfSe" value="1802161974" />
    <property role="3GE5qa" value="engine" />
    <property role="TrG5h" value="SMTrigger" />
    <property role="34LRSv" value="sm_trigger" />
    <ref role="1TJDcQ" to="c4fa:3CmSUB7FmO3" resolve="Statement" />
    <node concept="1TJgyj" id="5zmpEkiAYPc" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="events" />
      <property role="20lbJX" value="1..n" />
      <ref role="20lvS9" node="5zmpEki_6ye" resolve="SMGenEvent" />
    </node>
    <node concept="1TJgyj" id="5zmpEkiAYPe" role="1TKVEi">
      <property role="20lmBu" value="aggregation" />
      <property role="20kJfa" value="sm_handle" />
      <ref role="20lvS9" to="mj1l:7FQByU3CrCM" resolve="Expression" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6z0">
    <property role="1pbfSe" value="1802162021" />
    <property role="TrG5h" value="IEvent" />
    <property role="3GE5qa" value="interfaces" />
    <node concept="PrWs8" id="5zmpEki_82p" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6z8">
    <property role="1pbfSe" value="1802162029" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="IRegion" />
    <node concept="PrWs8" id="5zmpEki_84$" role="PrDN$">
      <ref role="PrY4T" to="c4fa:1OcdQnySJNS" resolve="ILocalVarScopeProvider" />
    </node>
    <node concept="PrWs8" id="5zmpEki_84D" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6za" resolve="ISMElementScopeProvider" />
    </node>
    <node concept="PrWs8" id="5zmpEki_84L" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6z9">
    <property role="1pbfSe" value="1802162030" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="ISMElement" />
  </node>
  <node concept="PlHQZ" id="5zmpEki_6za">
    <property role="1pbfSe" value="1802162031" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="ISMElementScopeProvider" />
    <node concept="PrWs8" id="5zmpEki_6zf" role="PrDN$">
      <ref role="PrY4T" to="vs0r:4qSf1u1TQeO" resolve="IContainerOfUniqueNames" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6zb">
    <property role="1pbfSe" value="1802162032" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="ISMNamedElement" />
    <node concept="PrWs8" id="5zmpEki_7EJ" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6z9" resolve="ISMElement" />
    </node>
    <node concept="PrWs8" id="5zmpEki_7EO" role="PrDN$">
      <ref role="PrY4T" to="vs0r:65XyadYKJgN" resolve="IIdentifierNamedConcept" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6zc">
    <property role="1pbfSe" value="1802162033" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="IState" />
    <node concept="PrWs8" id="5zmpEki_81s" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6za" resolve="ISMElementScopeProvider" />
    </node>
    <node concept="PrWs8" id="5zmpEki_81x" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6zd">
    <property role="1pbfSe" value="1802162034" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="IStateMachine" />
    <node concept="PrWs8" id="5zmpEki_82b" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
    <node concept="PrWs8" id="5zmpEki_aDH" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6za" resolve="ISMElementScopeProvider" />
    </node>
  </node>
  <node concept="PlHQZ" id="5zmpEki_6ze">
    <property role="1pbfSe" value="1802162035" />
    <property role="3GE5qa" value="interfaces" />
    <property role="TrG5h" value="ITransition" />
    <node concept="PrWs8" id="5zmpEki_82f" role="PrDN$">
      <ref role="PrY4T" node="5zmpEki_6zb" resolve="ISMNamedElement" />
    </node>
  </node>
</model>

