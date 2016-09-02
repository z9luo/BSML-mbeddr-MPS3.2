<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:8f51152b-e188-4b7c-b61d-13dc144148e0(BSML.BSML_stub)">
  <persistence version="9" />
  <languages>
    <use id="6d11763d-483d-4b2b-8efc-09336c1b0001" name="com.mbeddr.core.modules" version="0" />
    <devkit ref="fbc25dd2-5da4-483a-8b19-70928e1b62d7(jetbrains.mps.devkit.general-purpose)" />
  </languages>
  <imports />
  <registry>
    <language id="6d11763d-483d-4b2b-8efc-09336c1b0001" name="com.mbeddr.core.modules">
      <concept id="6116558314501417952" name="com.mbeddr.core.modules.structure.HeaderDescriptor" flags="ng" index="rcWE1" />
      <concept id="6116558314501417921" name="com.mbeddr.core.modules.structure.ExternalModule" flags="ng" index="rcWEw">
        <child id="6116558314501417978" name="descriptors" index="rcWEr" />
      </concept>
      <concept id="6116558314501417934" name="com.mbeddr.core.modules.structure.ExternalResourceDescriptor" flags="ng" index="rcWEJ">
        <property id="6116558314501417936" name="path" index="rcWEL" />
      </concept>
      <concept id="6116558314501417950" name="com.mbeddr.core.modules.structure.ObjResourceDescriptor" flags="ng" index="rcWEZ" />
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
  </registry>
  <node concept="rcWEw" id="4CfWYHsf2qd">
    <property role="TrG5h" value="BSML_stub" />
    <node concept="rcWE1" id="4CfWYHsf2q_" role="rcWEr">
      <property role="rcWEL" value="&lt;glib.h&gt;" />
    </node>
    <node concept="rcWE1" id="4CfWYHsf2qF" role="rcWEr">
      <property role="rcWEL" value="&lt;stdlib.h&gt;" />
    </node>
    <node concept="rcWE1" id="4CfWYHsf2qN" role="rcWEr">
      <property role="rcWEL" value="&lt;string.h&gt;" />
    </node>
    <node concept="rcWEZ" id="4CfWYHsf2r5" role="rcWEr">
      <property role="rcWEL" value="`pkg-config --libs glib-2.0`" />
    </node>
  </node>
</model>

