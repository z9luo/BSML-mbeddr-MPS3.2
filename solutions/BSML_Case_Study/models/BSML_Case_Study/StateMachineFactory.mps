<?xml version="1.0" encoding="UTF-8"?>
<model ref="r:256213ee-942f-4b57-8e84-31c8d950e9b6(BSML_Case_Study.StateMachineFactory)">
  <persistence version="9" />
  <languages>
    <use id="6d11763d-483d-4b2b-8efc-09336c1b0001" name="com.mbeddr.core.modules" version="0" />
    <use id="2d7fadf5-33f6-4e80-a78f-0f739add2bde" name="com.mbeddr.core.buildconfig" version="1" />
    <use id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base" version="3" />
    <use id="2693fc71-9b0e-4b05-ab13-f57227d675f2" name="com.mbeddr.core.util" version="0" />
    <use id="181cb8f2-3d5e-4aa9-b8cd-2e496087f7c8" name="BSML" version="0" />
  </languages>
  <imports>
    <import index="e852" ref="r:c74fb0ca-daca-4212-99a3-71185d149f76(BSML.__spreferences.PlatformTemplates)" />
    <import index="h3cf" ref="r:16108c80-6870-402f-8d41-2cfb1470347b(BSML.Generator_Header)" />
    <import index="ryp7" ref="r:8f51152b-e188-4b7c-b61d-13dc144148e0(BSML.BSML_stub)" />
  </imports>
  <registry>
    <language id="a9d69647-0840-491e-bf39-2eb0805d2011" name="com.mbeddr.core.statements">
      <concept id="7763322639126652757" name="com.mbeddr.core.statements.structure.ITypeContainingType" flags="ng" index="2umbIr">
        <child id="7763322639126652758" name="baseType" index="2umbIo" />
      </concept>
      <concept id="7254843406768833938" name="com.mbeddr.core.statements.structure.ExpressionStatement" flags="ng" index="1_9egQ">
        <child id="7254843406768833939" name="expr" index="1_9egR" />
      </concept>
      <concept id="1679452829930336984" name="com.mbeddr.core.statements.structure.CommentStatement" flags="ng" index="1QiMYF">
        <child id="8624890525768479139" name="textblock" index="3SJzmv" />
      </concept>
      <concept id="4185783222026475238" name="com.mbeddr.core.statements.structure.LocalVariableDeclaration" flags="ng" index="3XIRlf">
        <child id="4185783222026502647" name="init" index="3XIe9u" />
      </concept>
      <concept id="4185783222026475861" name="com.mbeddr.core.statements.structure.StatementList" flags="ng" index="3XIRFW">
        <child id="4185783222026475862" name="statements" index="3XIRFZ" />
      </concept>
      <concept id="2093108837558113914" name="com.mbeddr.core.statements.structure.LocalVarRef" flags="ng" index="3ZVu4v">
        <reference id="2093108837558124071" name="var" index="3ZVs_2" />
      </concept>
    </language>
    <language id="92d2ea16-5a42-4fdf-a676-c7604efe3504" name="de.slisson.mps.richtext">
      <concept id="2557074442922380897" name="de.slisson.mps.richtext.structure.Text" flags="ng" index="19SGf9">
        <child id="2557074442922392302" name="words" index="19SJt6" />
      </concept>
      <concept id="2557074442922438156" name="de.slisson.mps.richtext.structure.Word" flags="ng" index="19SUe$">
        <property id="2557074442922438158" name="escapedValue" index="19SUeA" />
      </concept>
    </language>
    <language id="2d7fadf5-33f6-4e80-a78f-0f739add2bde" name="com.mbeddr.core.buildconfig">
      <concept id="5046689135693761556" name="com.mbeddr.core.buildconfig.structure.Binary" flags="ng" index="2eOfOj">
        <child id="5046689135693761559" name="referencedModules" index="2eOfOg" />
      </concept>
      <concept id="5046689135693761554" name="com.mbeddr.core.buildconfig.structure.Executable" flags="ng" index="2eOfOl">
        <property id="3431613015799084476" name="isTest" index="iO3LB" />
      </concept>
      <concept id="7717755763392524104" name="com.mbeddr.core.buildconfig.structure.BuildConfiguration" flags="ng" index="2v9HqL">
        <child id="5046689135694070731" name="binaries" index="2ePNbc" />
        <child id="5323740605968447026" name="target" index="2AWWZH" />
      </concept>
      <concept id="7717755763392524107" name="com.mbeddr.core.buildconfig.structure.ModuleRef" flags="ng" index="2v9HqM">
        <reference id="7717755763392524108" name="module" index="2v9HqP" />
      </concept>
      <concept id="5323740605968447022" name="com.mbeddr.core.buildconfig.structure.DesktopPlatform" flags="ng" index="2AWWZL">
        <property id="5323740605968447025" name="compilerOptions" index="2AWWZI" />
        <property id="5323740605968447024" name="compiler" index="2AWWZJ" />
        <property id="3963667026125442601" name="gdb" index="3r8Kw1" />
        <property id="3963667026125442676" name="make" index="3r8Kxs" />
        <property id="1691534949151697076" name="linkerOptions" index="3I8uaA" />
      </concept>
      <concept id="2736179788492003936" name="com.mbeddr.core.buildconfig.structure.IDebuggablePlatform" flags="ng" index="1FkSt_">
        <property id="2736179788492003937" name="debugOptions" index="1FkSt$" />
      </concept>
    </language>
    <language id="3bf5377a-e904-4ded-9754-5a516023bfaa" name="com.mbeddr.core.pointers">
      <concept id="5308710777891643206" name="com.mbeddr.core.pointers.structure.NullExpression" flags="ng" index="Ea8Gl" />
      <concept id="6113173064528067332" name="com.mbeddr.core.pointers.structure.StringType" flags="ng" index="Pu267" />
      <concept id="1595838349830846141" name="com.mbeddr.core.pointers.structure.ReferenceExpr" flags="ng" index="YInwV" />
      <concept id="279446265608352903" name="com.mbeddr.core.pointers.structure.SizeOfExpr" flags="ng" index="3wxvTy">
        <child id="279446265608352905" name="type2Calculate" index="3wxvTG" />
      </concept>
      <concept id="279446265608459824" name="com.mbeddr.core.pointers.structure.PointerType" flags="ng" index="3wxxNl" />
      <concept id="5679441017214012545" name="com.mbeddr.core.pointers.structure.ArrayType" flags="ng" index="3J0A42" />
    </language>
    <language id="2693fc71-9b0e-4b05-ab13-f57227d675f2" name="com.mbeddr.core.util">
      <concept id="4459718605982051949" name="com.mbeddr.core.util.structure.ReportingConfiguration" flags="ng" index="2Q9Fgs">
        <child id="4459718605982051999" name="strategy" index="2Q9FjI" />
      </concept>
      <concept id="4459718605982051980" name="com.mbeddr.core.util.structure.PrintfReportingStrategy" flags="ng" index="2Q9FjX" />
    </language>
    <language id="efda956e-491e-4f00-ba14-36af2f213ecf" name="com.mbeddr.core.udt">
      <concept id="6116558314501347863" name="com.mbeddr.core.udt.structure.TypeDefType" flags="ng" index="rcJHQ">
        <reference id="6116558314501347864" name="typeDef" index="rcJHT" />
      </concept>
    </language>
    <language id="d4280a54-f6df-4383-aa41-d1b2bffa7eb1" name="com.mbeddr.core.base">
      <concept id="8375407818529178006" name="com.mbeddr.core.base.structure.TextBlock" flags="ng" index="OjmMv">
        <child id="8375407818529178007" name="text" index="OjmMu" />
      </concept>
      <concept id="4459718605982007337" name="com.mbeddr.core.base.structure.IConfigurationContainer" flags="ng" index="2Q9xDo">
        <child id="4459718605982007338" name="configurationItems" index="2Q9xDr" />
      </concept>
      <concept id="747084250476811597" name="com.mbeddr.core.base.structure.DefaultGenericChunkDependency" flags="ng" index="3GEVxB">
        <reference id="747084250476878887" name="chunk" index="3GEb4d" />
      </concept>
    </language>
    <language id="6d11763d-483d-4b2b-8efc-09336c1b0001" name="com.mbeddr.core.modules">
      <concept id="8967919205527146149" name="com.mbeddr.core.modules.structure.ReturnStatement" flags="ng" index="2BFjQ_">
        <child id="8967919205527146150" name="expression" index="2BFjQA" />
      </concept>
      <concept id="8105003328814797298" name="com.mbeddr.core.modules.structure.IFunctionLike" flags="ng" index="2H9T1B">
        <child id="5708867820623310661" name="arguments" index="1UOdpc" />
      </concept>
      <concept id="6437088627575722813" name="com.mbeddr.core.modules.structure.Module" flags="ng" index="N3F4X">
        <child id="6437088627575722833" name="contents" index="N3F5h" />
        <child id="1317894735999304826" name="imports" index="2OODSX" />
      </concept>
      <concept id="6437088627575722830" name="com.mbeddr.core.modules.structure.ImplementationModule" flags="ng" index="N3F5e" />
      <concept id="6437088627575722831" name="com.mbeddr.core.modules.structure.IModuleContent" flags="ng" index="N3F5f">
        <property id="1317894735999272944" name="exported" index="2OOxQR" />
      </concept>
      <concept id="6437088627575724001" name="com.mbeddr.core.modules.structure.Function" flags="ng" index="N3Fnx">
        <child id="4185783222026475860" name="body" index="3XIRFX" />
      </concept>
      <concept id="8934095934011938595" name="com.mbeddr.core.modules.structure.EmptyModuleContent" flags="ng" index="2NXPZ9" />
      <concept id="7892328519581704407" name="com.mbeddr.core.modules.structure.Argument" flags="ng" index="19RgSI" />
      <concept id="5950410542643524492" name="com.mbeddr.core.modules.structure.FunctionCall" flags="ng" index="3O_q_g">
        <reference id="5950410542643524493" name="function" index="3O_q_h" />
        <child id="5950410542643524495" name="actuals" index="3O_q_j" />
      </concept>
      <concept id="6610873504380357354" name="com.mbeddr.core.modules.structure.GlobalVarRef" flags="ng" index="1S7827">
        <reference id="6610873504380357355" name="var" index="1S7826" />
      </concept>
      <concept id="6610873504380335822" name="com.mbeddr.core.modules.structure.GlobalVariableDeclaration" flags="ng" index="1S7NMz" />
      <concept id="2093108837558505658" name="com.mbeddr.core.modules.structure.ArgumentRef" flags="ng" index="3ZUYvv">
        <reference id="2093108837558505659" name="arg" index="3ZUYvu" />
      </concept>
    </language>
    <language id="ceab5195-25ea-4f22-9b92-103b95ca8c0c" name="jetbrains.mps.lang.core">
      <concept id="1169194658468" name="jetbrains.mps.lang.core.structure.INamedConcept" flags="ng" index="TrEIO">
        <property id="1169194664001" name="name" index="TrG5h" />
      </concept>
    </language>
    <language id="61c69711-ed61-4850-81d9-7714ff227fb0" name="com.mbeddr.core.expressions">
      <concept id="8463282783691618440" name="com.mbeddr.core.expressions.structure.Int32tType" flags="ng" index="26Vqph" />
      <concept id="3005510381523579442" name="com.mbeddr.core.expressions.structure.UnaryExpression" flags="ng" index="2aKSnQ">
        <child id="7254843406768839760" name="expression" index="1_9fRO" />
      </concept>
      <concept id="2212975673976017893" name="com.mbeddr.core.expressions.structure.NumericLiteral" flags="ng" index="2hns93">
        <property id="2212975673976043696" name="value" index="2hmy$m" />
      </concept>
      <concept id="5763383285156533447" name="com.mbeddr.core.expressions.structure.ParensExpression" flags="ng" index="2BPB98" />
      <concept id="318113533128716675" name="com.mbeddr.core.expressions.structure.ITyped" flags="ng" index="2C2TGh">
        <child id="318113533128716676" name="type" index="2C2TGm" />
      </concept>
      <concept id="8863019357864392148" name="com.mbeddr.core.expressions.structure.SizeT" flags="ng" index="2O5j3L" />
      <concept id="7892328519581699353" name="com.mbeddr.core.expressions.structure.VoidType" flags="ng" index="19Rifw" />
      <concept id="22102029902365709" name="com.mbeddr.core.expressions.structure.AssignmentExpr" flags="ng" index="3pqW6w" />
      <concept id="6610873504380029780" name="com.mbeddr.core.expressions.structure.CastExpression" flags="ng" index="1S8S4T">
        <child id="6610873504380029790" name="targetType" index="1S8S4N" />
        <child id="6610873504380029782" name="expr" index="1S8S4V" />
      </concept>
      <concept id="8860443239512128054" name="com.mbeddr.core.expressions.structure.Type" flags="ng" index="3TlMgo">
        <property id="2941277002445651368" name="const" index="2c7vTL" />
        <property id="2941277002448691247" name="volatile" index="2caQfQ" />
      </concept>
      <concept id="8860443239512128052" name="com.mbeddr.core.expressions.structure.BinaryExpression" flags="ng" index="3TlMgq">
        <child id="8860443239512128064" name="left" index="3TlMhI" />
        <child id="8860443239512128065" name="right" index="3TlMhJ" />
      </concept>
      <concept id="8860443239512128103" name="com.mbeddr.core.expressions.structure.NumberLiteral" flags="ng" index="3TlMh9" />
      <concept id="8860443239512128094" name="com.mbeddr.core.expressions.structure.TrueLiteral" flags="ng" index="3TlMhK" />
    </language>
    <language id="181cb8f2-3d5e-4aa9-b8cd-2e496087f7c8" name="BSML">
      <concept id="6401416779521091716" name="BSML.structure.EventCall" flags="ng" index="1agwSx">
        <reference id="6401416779521232931" name="event_ref" index="1agfq6" />
        <child id="6401416779521232929" name="actuals" index="1agfq4" />
      </concept>
      <concept id="6401416779521091718" name="BSML.structure.RegionLocalDeclaration" flags="ng" index="1agwSz">
        <reference id="6401416779521341353" name="initState" index="1aj_4c" />
        <child id="6401416779521341351" name="content" index="1aj_42" />
      </concept>
      <concept id="6401416779521091712" name="BSML.structure.EndBigStepBlock" flags="ng" index="1agwS_" />
      <concept id="6401416779521091715" name="BSML.structure.EventArgRef" flags="ng" index="1agwSA" />
      <concept id="6401416779521091714" name="BSML.structure.Event" flags="ng" index="1agwSB">
        <property id="6401416779521175841" name="in_event" index="1agXu4" />
        <property id="6401416779521175843" name="rendezvous" index="1agXu6" />
        <child id="6401416779521175848" name="args" index="1agXud" />
        <child id="6401416779521175850" name="binding" index="1agXuf" />
      </concept>
      <concept id="6401416779521091725" name="BSML.structure.CFunctionBinding" flags="ng" index="1agwSC">
        <reference id="6401416779521514244" name="binding" index="1ajbQx" />
      </concept>
      <concept id="6401416779521091724" name="BSML.structure.TriggerEventRef" flags="ng" index="1agwSD">
        <reference id="6401416779521477089" name="var" index="1aj2X4" />
      </concept>
      <concept id="6401416779521091727" name="BSML.structure.SMStart" flags="ng" index="1agwSE">
        <reference id="6401416779521583863" name="sm_ref" index="1ajoLi" />
      </concept>
      <concept id="6401416779521091726" name="BSML.structure.SMGenEvent" flags="ng" index="1agwSF">
        <reference id="6401416779521514312" name="event_ref" index="1ajbRH" />
        <child id="6401416779521514310" name="actuals" index="1ajbRz" />
      </concept>
      <concept id="6401416779521091723" name="BSML.structure.Transition" flags="ng" index="1agwSI">
        <reference id="6401416779521446291" name="source" index="1ajVsQ" />
        <reference id="6401416779521446296" name="target" index="1ajVsX" />
        <child id="6401416779521446284" name="action" index="1ajVsD" />
        <child id="6401416779521446287" name="triggers" index="1ajVsE" />
        <child id="6401416779521446282" name="guard" index="1ajVsJ" />
      </concept>
      <concept id="6401416779521091722" name="BSML.structure.StateLocalDeclaration" flags="ng" index="1agwSJ">
        <child id="6401416779521397752" name="content" index="1ajRlt" />
      </concept>
      <concept id="6401416779521091729" name="BSML.structure.SMTrigger" flags="ng" index="1agwSO">
        <child id="6401416779521584460" name="events" index="1ajoJD" />
        <child id="6401416779521584462" name="sm_handle" index="1ajoJF" />
      </concept>
      <concept id="6401416779521091711" name="BSML.structure.AbstractBlock" flags="ng" index="1agwVq">
        <child id="6401416779521160424" name="content" index="1agL9d" />
      </concept>
      <concept id="6401416779521091710" name="BSML.structure.SMGlobalDeclaration" flags="ng" index="1agwVr">
        <child id="6401416779521108831" name="content" index="1agGRU" />
      </concept>
      <concept id="6401416779521091705" name="BSML.structure.RegionType" flags="ng" index="1agwVs" />
      <concept id="6401416779521091707" name="BSML.structure.SMType" flags="ng" index="1agwVu">
        <reference id="6401416779521091708" name="sm_ref" index="1agwVp" />
      </concept>
      <concept id="6401416779521091706" name="BSML.structure.StateType" flags="ng" index="1agwVv" />
      <concept id="6401416779520902536" name="BSML.structure.StateMachineConfigItem" flags="ng" index="1ahYcH">
        <property id="6401416779520902541" name="concurrency" index="1ahYcC" />
        <property id="6401416779520902539" name="bigStepMaximality" index="1ahYcI" />
      </concept>
    </language>
  </registry>
  <node concept="2v9HqL" id="4CfWYHshsex">
    <node concept="2AWWZL" id="4CfWYHshseN" role="2AWWZH">
      <property role="2AWWZJ" value="gcc" />
      <property role="3r8Kw1" value="gdb" />
      <property role="3r8Kxs" value="make" />
      <property role="2AWWZI" value="-std=c99" />
      <property role="1FkSt$" value="-g" />
      <property role="3I8uaA" value="-std=c99 -std=c99 `pkg-config --cflags glib-2.0`" />
    </node>
    <node concept="2Q9Fgs" id="4CfWYHshseP" role="2Q9xDr">
      <node concept="2Q9FjX" id="4CfWYHshseQ" role="2Q9FjI" />
    </node>
    <node concept="1ahYcH" id="4CfWYHshseX" role="2Q9xDr">
      <property role="1ahYcI" value="0" />
      <property role="1ahYcC" value="0" />
    </node>
    <node concept="2eOfOl" id="4CfWYHshRR7" role="2ePNbc">
      <property role="iO3LB" value="false" />
      <property role="TrG5h" value="SMFactory" />
      <node concept="2v9HqM" id="4CfWYHshRR9" role="2eOfOg">
        <ref role="2v9HqP" node="4CfWYHshsfk" resolve="StateMachineFactoryImpl" />
      </node>
      <node concept="2v9HqM" id="4CfWYHshRRe" role="2eOfOg">
        <ref role="2v9HqP" to="ryp7:4CfWYHsf2qd" resolve="BSML_stub" />
      </node>
      <node concept="2v9HqM" id="4CfWYHshRRm" role="2eOfOg">
        <ref role="2v9HqP" to="h3cf:4CfWYHsf2rL" resolve="glib_stub" />
      </node>
      <node concept="2v9HqM" id="4CfWYHshRRw" role="2eOfOg">
        <ref role="2v9HqP" to="h3cf:4CfWYHsf775" resolve="glib_Thread_stub" />
      </node>
      <node concept="2v9HqM" id="4CfWYHshRRG" role="2eOfOg">
        <ref role="2v9HqP" to="h3cf:4CfWYHsf2VG" resolve="stdlib_stub" />
      </node>
    </node>
  </node>
  <node concept="N3F5e" id="4CfWYHshsfk">
    <property role="TrG5h" value="StateMachineFactoryImpl" />
    <node concept="N3Fnx" id="4CfWYHshsgl" role="N3F5h">
      <property role="TrG5h" value="main" />
      <property role="2OOxQR" value="true" />
      <node concept="3XIRFW" id="4CfWYHshsgn" role="3XIRFX">
        <node concept="3XIRlf" id="4CfWYHshIlB" role="3XIRFZ">
          <property role="TrG5h" value="sm" />
          <node concept="3wxxNl" id="4CfWYHshIn8" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
            <node concept="1agwVu" id="4CfWYHshIl_" role="2umbIo">
              <property role="2caQfQ" value="false" />
              <property role="2c7vTL" value="false" />
              <ref role="1agwVp" node="4CfWYHshsoz" resolve="SMFactory" />
            </node>
          </node>
          <node concept="1agwSE" id="4CfWYHshIv1" role="3XIe9u">
            <ref role="1ajoLi" node="4CfWYHshsoz" resolve="SMFactory" />
          </node>
        </node>
        <node concept="3XIRlf" id="4CfWYHshIAp" role="3XIRFZ">
          <property role="TrG5h" value="ret_single" />
          <node concept="1agwVu" id="4CfWYHshIAn" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
            <ref role="1agwVp" node="4CfWYHshsCR" resolve="Singleton" />
          </node>
        </node>
        <node concept="3XIRlf" id="4CfWYHshIPS" role="3XIRFZ">
          <property role="TrG5h" value="ret_multi" />
          <node concept="1agwVu" id="4CfWYHshIPQ" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
            <ref role="1agwVp" node="4CfWYHshD$d" resolve="NonSingleton" />
          </node>
        </node>
        <node concept="1_9egQ" id="4CfWYHshJan" role="3XIRFZ">
          <node concept="3O_q_g" id="4CfWYHshJal" role="1_9egR">
            <ref role="3O_q_h" to="h3cf:4CfWYHsf7G$" resolve="g_mutex_lock" />
            <node concept="YInwV" id="4CfWYHshJch" role="3O_q_j">
              <node concept="1S7827" id="4CfWYHshJek" role="1_9fRO">
                <ref role="1S7826" node="4CfWYHshsk7" resolve="mutex" />
              </node>
            </node>
          </node>
        </node>
        <node concept="1agwSO" id="4CfWYHshJh4" role="3XIRFZ">
          <node concept="1agwSF" id="4CfWYHshJn5" role="1ajoJD">
            <ref role="1ajbRH" node="4CfWYHshDDS" resolve="get_singleton" />
            <node concept="YInwV" id="4CfWYHshJoK" role="1ajbRz">
              <node concept="3ZVu4v" id="4CfWYHshJp4" role="1_9fRO">
                <ref role="3ZVs_2" node="4CfWYHshIAp" resolve="ret_single" />
              </node>
            </node>
          </node>
          <node concept="1agwSF" id="4CfWYHshJrn" role="1ajoJD">
            <ref role="1ajbRH" node="4CfWYHshHVO" resolve="get_nonsingleton" />
            <node concept="YInwV" id="4CfWYHshJt5" role="1ajbRz">
              <node concept="3ZVu4v" id="4CfWYHshJtp" role="1_9fRO">
                <ref role="3ZVs_2" node="4CfWYHshIPS" resolve="ret_multi" />
              </node>
            </node>
          </node>
          <node concept="3ZVu4v" id="4CfWYHshJjg" role="1ajoJF">
            <ref role="3ZVs_2" node="4CfWYHshIlB" resolve="sm" />
          </node>
        </node>
        <node concept="1_9egQ" id="4CfWYHshJvU" role="3XIRFZ">
          <node concept="3O_q_g" id="4CfWYHshJvS" role="1_9egR">
            <ref role="3O_q_h" to="h3cf:4CfWYHsf7G$" resolve="g_mutex_lock" />
            <node concept="YInwV" id="4CfWYHshJy0" role="3O_q_j">
              <node concept="1S7827" id="4CfWYHshJ$3" role="1_9fRO">
                <ref role="1S7826" node="4CfWYHshsk7" resolve="mutex" />
              </node>
            </node>
          </node>
        </node>
        <node concept="1agwSO" id="4CfWYHshJAC" role="3XIRFZ">
          <node concept="YInwV" id="4CfWYHshRDE" role="1ajoJF">
            <node concept="3ZVu4v" id="4CfWYHshRG3" role="1_9fRO">
              <ref role="3ZVs_2" node="4CfWYHshIAp" resolve="ret_single" />
            </node>
          </node>
          <node concept="1agwSF" id="4CfWYHshRGg" role="1ajoJD">
            <ref role="1ajbRH" node="4CfWYHshsFA" resolve="e" />
          </node>
        </node>
        <node concept="1agwSO" id="4CfWYHshRKf" role="3XIRFZ">
          <node concept="1agwSF" id="4CfWYHshROv" role="1ajoJD">
            <ref role="1ajbRH" node="4CfWYHshD$i" resolve="e" />
          </node>
          <node concept="YInwV" id="4CfWYHshRM_" role="1ajoJF">
            <node concept="3ZVu4v" id="4CfWYHshROi" role="1_9fRO">
              <ref role="3ZVs_2" node="4CfWYHshIPS" resolve="ret_multi" />
            </node>
          </node>
        </node>
        <node concept="2BFjQ_" id="4CfWYHshsgv" role="3XIRFZ">
          <node concept="3TlMh9" id="4CfWYHshsgw" role="2BFjQA">
            <property role="2hmy$m" value="0" />
          </node>
        </node>
      </node>
      <node concept="26Vqph" id="4CfWYHshsgp" role="2C2TGm">
        <property role="2caQfQ" value="false" />
        <property role="2c7vTL" value="false" />
      </node>
      <node concept="19RgSI" id="4CfWYHshsgq" role="1UOdpc">
        <property role="TrG5h" value="argc" />
        <node concept="26Vqph" id="4CfWYHshsgr" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
        </node>
      </node>
      <node concept="19RgSI" id="4CfWYHshsgs" role="1UOdpc">
        <property role="TrG5h" value="argv" />
        <node concept="3J0A42" id="4CfWYHshsgt" role="2C2TGm">
          <property role="2caQfQ" value="false" />
          <property role="2c7vTL" value="false" />
          <node concept="Pu267" id="4CfWYHshsgu" role="2umbIo">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
        </node>
      </node>
    </node>
    <node concept="2NXPZ9" id="4CfWYHshsim" role="N3F5h">
      <property role="TrG5h" value="empty_1465785196144_135" />
    </node>
    <node concept="1S7NMz" id="4CfWYHshsk7" role="N3F5h">
      <property role="TrG5h" value="mutex" />
      <node concept="rcJHQ" id="4CfWYHshsk5" role="2C2TGm">
        <property role="2caQfQ" value="false" />
        <property role="2c7vTL" value="false" />
        <ref role="rcJHT" to="h3cf:4CfWYHsf7_K" resolve="GMutex" />
      </node>
    </node>
    <node concept="1agwVr" id="4CfWYHshsoz" role="N3F5h">
      <property role="TrG5h" value="SMFactory" />
      <node concept="3XIRFW" id="4CfWYHshso$" role="1agGRU">
        <node concept="1agwSz" id="4CfWYHshso_" role="3XIRFZ">
          <property role="TrG5h" value="main" />
          <ref role="1aj_4c" node="4CfWYHshswG" resolve="mainState" />
          <node concept="1agwVs" id="4CfWYHshsoA" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="3XIRFW" id="4CfWYHshsoD" role="1aj_42">
            <node concept="1agwSB" id="4CfWYHshsqX" role="3XIRFZ">
              <property role="1agXu4" value="false" />
              <property role="1agXu6" value="false" />
              <property role="TrG5h" value="set_instance" />
              <node concept="19RgSI" id="4CfWYHshsrl" role="1agXud">
                <property role="TrG5h" value="dest" />
                <node concept="3wxxNl" id="4CfWYHshsrz" role="2C2TGm">
                  <property role="2caQfQ" value="false" />
                  <property role="2c7vTL" value="false" />
                  <node concept="19Rifw" id="4CfWYHshsrk" role="2umbIo">
                    <property role="2caQfQ" value="false" />
                    <property role="2c7vTL" value="false" />
                  </node>
                </node>
              </node>
              <node concept="19RgSI" id="4CfWYHshssE" role="1agXud">
                <property role="TrG5h" value="src" />
                <node concept="3wxxNl" id="4CfWYHshssV" role="2C2TGm">
                  <property role="2caQfQ" value="false" />
                  <property role="2c7vTL" value="true" />
                  <node concept="19Rifw" id="4CfWYHshssC" role="2umbIo">
                    <property role="2caQfQ" value="false" />
                    <property role="2c7vTL" value="false" />
                  </node>
                </node>
              </node>
              <node concept="19RgSI" id="4CfWYHshsuH" role="1agXud">
                <property role="TrG5h" value="bytes" />
                <node concept="2O5j3L" id="4CfWYHshsuF" role="2C2TGm">
                  <property role="2caQfQ" value="false" />
                  <property role="2c7vTL" value="false" />
                </node>
              </node>
              <node concept="1agwSC" id="4CfWYHshsvl" role="1agXuf">
                <ref role="1ajbQx" to="h3cf:4CfWYHsf3o0" resolve="memcpy" />
              </node>
            </node>
            <node concept="1agwSJ" id="4CfWYHshswG" role="3XIRFZ">
              <property role="TrG5h" value="mainState" />
              <node concept="1agwVv" id="4CfWYHshswH" role="2C2TGm">
                <property role="2caQfQ" value="false" />
                <property role="2c7vTL" value="false" />
              </node>
              <node concept="3XIRFW" id="4CfWYHshswI" role="1ajRlt">
                <node concept="1agwSz" id="4CfWYHshs_k" role="3XIRFZ">
                  <property role="TrG5h" value="genSingleton" />
                  <ref role="1aj_4c" node="4CfWYHshDH8" resolve="off" />
                  <node concept="1agwVs" id="4CfWYHshs_l" role="2C2TGm">
                    <property role="2caQfQ" value="false" />
                    <property role="2c7vTL" value="false" />
                  </node>
                  <node concept="3XIRFW" id="4CfWYHshs_m" role="1aj_42">
                    <node concept="3XIRlf" id="4CfWYHshDBB" role="3XIRFZ">
                      <property role="TrG5h" value="instance" />
                      <node concept="3wxxNl" id="4CfWYHshDBM" role="2C2TGm">
                        <property role="2caQfQ" value="false" />
                        <property role="2c7vTL" value="false" />
                        <node concept="1agwVu" id="4CfWYHshDB_" role="2umbIo">
                          <property role="2caQfQ" value="false" />
                          <property role="2c7vTL" value="false" />
                          <ref role="1agwVp" node="4CfWYHshsCR" resolve="Singleton" />
                        </node>
                      </node>
                      <node concept="Ea8Gl" id="4CfWYHshDCP" role="3XIe9u" />
                    </node>
                    <node concept="1agwSB" id="4CfWYHshDDS" role="3XIRFZ">
                      <property role="1agXu4" value="false" />
                      <property role="1agXu6" value="false" />
                      <property role="TrG5h" value="get_singleton" />
                      <node concept="19RgSI" id="4CfWYHshDF8" role="1agXud">
                        <property role="TrG5h" value="ret" />
                        <node concept="3wxxNl" id="4CfWYHshDFm" role="2C2TGm">
                          <property role="2caQfQ" value="false" />
                          <property role="2c7vTL" value="false" />
                          <node concept="1agwVu" id="4CfWYHshDF7" role="2umbIo">
                            <property role="2caQfQ" value="false" />
                            <property role="2c7vTL" value="false" />
                            <ref role="1agwVp" node="4CfWYHshsCR" resolve="Singleton" />
                          </node>
                        </node>
                      </node>
                    </node>
                    <node concept="1agwSJ" id="4CfWYHshDH8" role="3XIRFZ">
                      <property role="TrG5h" value="off" />
                      <node concept="1agwVv" id="4CfWYHshDH9" role="2C2TGm">
                        <property role="2caQfQ" value="false" />
                        <property role="2c7vTL" value="false" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshDHa" role="1ajRlt" />
                    </node>
                    <node concept="1agwSJ" id="4CfWYHshDIp" role="3XIRFZ">
                      <property role="TrG5h" value="on" />
                      <node concept="1agwVv" id="4CfWYHshDIq" role="2C2TGm">
                        <property role="2caQfQ" value="false" />
                        <property role="2c7vTL" value="false" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshDIr" role="1ajRlt" />
                    </node>
                    <node concept="1agwSI" id="4CfWYHshDJh" role="3XIRFZ">
                      <property role="TrG5h" value="t1" />
                      <ref role="1ajVsQ" node="4CfWYHshDH8" resolve="off" />
                      <ref role="1ajVsX" node="4CfWYHshDIp" resolve="on" />
                      <node concept="3TlMhK" id="4CfWYHshDJi" role="1ajVsJ" />
                      <node concept="1agwSD" id="4CfWYHshDJB" role="1ajVsE">
                        <ref role="1aj2X4" node="4CfWYHshDDS" resolve="get_singleton" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshDJE" role="1ajVsD">
                        <node concept="1_9egQ" id="4CfWYHshDK8" role="3XIRFZ">
                          <node concept="3pqW6w" id="4CfWYHshDKp" role="1_9egR">
                            <node concept="1agwSE" id="4CfWYHshDLx" role="3TlMhJ">
                              <ref role="1ajoLi" node="4CfWYHshsCR" resolve="Singleton" />
                            </node>
                            <node concept="3ZVu4v" id="4CfWYHshDK7" role="3TlMhI">
                              <ref role="3ZVs_2" node="4CfWYHshDBB" resolve="instance" />
                            </node>
                          </node>
                        </node>
                        <node concept="1agwSx" id="4CfWYHshDPt" role="3XIRFZ">
                          <ref role="1agfq6" node="4CfWYHshsqX" resolve="set_instance" />
                          <node concept="1agwSA" id="4CfWYHshDQ0" role="1agfq4">
                            <ref role="3ZUYvu" node="4CfWYHshDF8" resolve="ret" />
                          </node>
                          <node concept="1S8S4T" id="4CfWYHshHEQ" role="1agfq4">
                            <node concept="2BPB98" id="4CfWYHshHER" role="1S8S4V">
                              <node concept="3ZVu4v" id="4CfWYHshHG4" role="1_9fRO">
                                <ref role="3ZVs_2" node="4CfWYHshDBB" resolve="instance" />
                              </node>
                            </node>
                            <node concept="3wxxNl" id="4CfWYHshHFe" role="1S8S4N">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <node concept="19Rifw" id="4CfWYHshHF5" role="2umbIo">
                                <property role="2caQfQ" value="false" />
                                <property role="2c7vTL" value="false" />
                              </node>
                            </node>
                          </node>
                          <node concept="3wxvTy" id="4CfWYHshHH$" role="1agfq4">
                            <node concept="1agwVu" id="4CfWYHshHKg" role="3wxvTG">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <ref role="1agwVp" node="4CfWYHshsCR" resolve="Singleton" />
                            </node>
                          </node>
                        </node>
                        <node concept="1QiMYF" id="4CfWYHshHMa" role="3XIRFZ">
                          <node concept="OjmMv" id="4CfWYHshHMc" role="3SJzmv">
                            <node concept="19SGf9" id="4CfWYHshHMd" role="OjmMu">
                              <node concept="19SUe$" id="4CfWYHshHMe" role="19SJt6">
                                <property role="19SUeA" value="unlock_mutex(&amp;mutex)" />
                              </node>
                            </node>
                          </node>
                        </node>
                      </node>
                    </node>
                    <node concept="1agwSI" id="4CfWYHshHNl" role="3XIRFZ">
                      <property role="TrG5h" value="t2" />
                      <ref role="1ajVsQ" node="4CfWYHshDIp" resolve="on" />
                      <ref role="1ajVsX" node="4CfWYHshDIp" resolve="on" />
                      <node concept="3TlMhK" id="4CfWYHshHNm" role="1ajVsJ" />
                      <node concept="1agwSD" id="4CfWYHshHO0" role="1ajVsE">
                        <ref role="1aj2X4" node="4CfWYHshDDS" resolve="get_singleton" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshHO3" role="1ajVsD">
                        <node concept="1agwSx" id="4CfWYHshHOh" role="3XIRFZ">
                          <ref role="1agfq6" node="4CfWYHshsqX" resolve="set_instance" />
                          <node concept="1agwSA" id="4CfWYHshHOi" role="1agfq4">
                            <ref role="3ZUYvu" node="4CfWYHshDF8" resolve="ret" />
                          </node>
                          <node concept="1S8S4T" id="4CfWYHshHOj" role="1agfq4">
                            <node concept="2BPB98" id="4CfWYHshHOk" role="1S8S4V">
                              <node concept="3ZVu4v" id="4CfWYHshHOl" role="1_9fRO">
                                <ref role="3ZVs_2" node="4CfWYHshDBB" resolve="instance" />
                              </node>
                            </node>
                            <node concept="3wxxNl" id="4CfWYHshHOm" role="1S8S4N">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <node concept="19Rifw" id="4CfWYHshHOn" role="2umbIo">
                                <property role="2caQfQ" value="false" />
                                <property role="2c7vTL" value="false" />
                              </node>
                            </node>
                          </node>
                          <node concept="3wxvTy" id="4CfWYHshHOo" role="1agfq4">
                            <node concept="1agwVu" id="4CfWYHshHOp" role="3wxvTG">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <ref role="1agwVp" node="4CfWYHshsCR" resolve="Singleton" />
                            </node>
                          </node>
                        </node>
                        <node concept="1QiMYF" id="4CfWYHshHRe" role="3XIRFZ">
                          <node concept="OjmMv" id="4CfWYHshHRg" role="3SJzmv">
                            <node concept="19SGf9" id="4CfWYHshHRh" role="OjmMu">
                              <node concept="19SUe$" id="4CfWYHshHRi" role="19SJt6">
                                <property role="19SUeA" value="unlock_mutex(&amp;mutex)" />
                              </node>
                            </node>
                          </node>
                        </node>
                      </node>
                    </node>
                  </node>
                </node>
                <node concept="1agwSz" id="4CfWYHshHUt" role="3XIRFZ">
                  <property role="TrG5h" value="genNonsingleton" />
                  <ref role="1aj_4c" node="4CfWYHshHYq" resolve="any" />
                  <node concept="1agwVs" id="4CfWYHshHUu" role="2C2TGm">
                    <property role="2caQfQ" value="false" />
                    <property role="2c7vTL" value="false" />
                  </node>
                  <node concept="3XIRFW" id="4CfWYHshHUv" role="1aj_42">
                    <node concept="1agwSB" id="4CfWYHshHVO" role="3XIRFZ">
                      <property role="1agXu4" value="false" />
                      <property role="1agXu6" value="false" />
                      <property role="TrG5h" value="get_nonsingleton" />
                      <node concept="19RgSI" id="4CfWYHshHWc" role="1agXud">
                        <property role="TrG5h" value="ret" />
                        <node concept="3wxxNl" id="4CfWYHshHWq" role="2C2TGm">
                          <property role="2caQfQ" value="false" />
                          <property role="2c7vTL" value="false" />
                          <node concept="1agwVu" id="4CfWYHshHWb" role="2umbIo">
                            <property role="2caQfQ" value="false" />
                            <property role="2c7vTL" value="false" />
                            <ref role="1agwVp" node="4CfWYHshD$d" resolve="NonSingleton" />
                          </node>
                        </node>
                      </node>
                    </node>
                    <node concept="1agwSJ" id="4CfWYHshHYq" role="3XIRFZ">
                      <property role="TrG5h" value="any" />
                      <node concept="1agwVv" id="4CfWYHshHYr" role="2C2TGm">
                        <property role="2caQfQ" value="false" />
                        <property role="2c7vTL" value="false" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshHYs" role="1ajRlt" />
                    </node>
                    <node concept="1agwSI" id="4CfWYHshI7w" role="3XIRFZ">
                      <property role="TrG5h" value="t1" />
                      <ref role="1ajVsQ" node="4CfWYHshHYq" resolve="any" />
                      <ref role="1ajVsX" node="4CfWYHshHYq" resolve="any" />
                      <node concept="3TlMhK" id="4CfWYHshI7x" role="1ajVsJ" />
                      <node concept="1agwSD" id="4CfWYHshI7J" role="1ajVsE">
                        <ref role="1aj2X4" node="4CfWYHshHVO" resolve="get_nonsingleton" />
                      </node>
                      <node concept="3XIRFW" id="4CfWYHshI7M" role="1ajVsD">
                        <node concept="1agwSx" id="4CfWYHshI7Y" role="3XIRFZ">
                          <ref role="1agfq6" node="4CfWYHshsqX" resolve="set_instance" />
                          <node concept="1agwSA" id="4CfWYHshI7Z" role="1agfq4">
                            <ref role="3ZUYvu" node="4CfWYHshHWc" resolve="ret" />
                          </node>
                          <node concept="1S8S4T" id="4CfWYHshI80" role="1agfq4">
                            <node concept="2BPB98" id="4CfWYHshI81" role="1S8S4V">
                              <node concept="1agwSE" id="4CfWYHshIdi" role="1_9fRO">
                                <ref role="1ajoLi" node="4CfWYHshD$d" resolve="NonSingleton" />
                              </node>
                            </node>
                            <node concept="3wxxNl" id="4CfWYHshI83" role="1S8S4N">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <node concept="19Rifw" id="4CfWYHshI84" role="2umbIo">
                                <property role="2caQfQ" value="false" />
                                <property role="2c7vTL" value="false" />
                              </node>
                            </node>
                          </node>
                          <node concept="3wxvTy" id="4CfWYHshI85" role="1agfq4">
                            <node concept="1agwVu" id="4CfWYHshIaa" role="3wxvTG">
                              <property role="2caQfQ" value="false" />
                              <property role="2c7vTL" value="false" />
                              <ref role="1agwVp" node="4CfWYHshD$d" resolve="NonSingleton" />
                            </node>
                          </node>
                        </node>
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
            <node concept="1agwS_" id="4CfWYHshIib" role="3XIRFZ">
              <node concept="3XIRFW" id="4CfWYHshIic" role="1agL9d">
                <node concept="1_9egQ" id="4CfWYHshIjY" role="3XIRFZ">
                  <node concept="3O_q_g" id="4CfWYHshIjW" role="1_9egR">
                    <ref role="3O_q_h" to="h3cf:4CfWYHsf7Io" resolve="g_mutex_unlock" />
                    <node concept="YInwV" id="4CfWYHshIk9" role="3O_q_j">
                      <node concept="1S7827" id="4CfWYHshIkB" role="1_9fRO">
                        <ref role="1S7826" node="4CfWYHshsk7" resolve="mutex" />
                      </node>
                    </node>
                  </node>
                </node>
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2NXPZ9" id="4CfWYHshsAm" role="N3F5h">
      <property role="TrG5h" value="empty_1465785372878_138" />
    </node>
    <node concept="1agwVr" id="4CfWYHshD$d" role="N3F5h">
      <property role="TrG5h" value="NonSingleton" />
      <node concept="3XIRFW" id="4CfWYHshD$e" role="1agGRU">
        <node concept="1agwSz" id="4CfWYHshD$f" role="3XIRFZ">
          <property role="TrG5h" value="main" />
          <ref role="1aj_4c" node="4CfWYHshD$j" resolve="AnyState" />
          <node concept="1agwVs" id="4CfWYHshD$g" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="3XIRFW" id="4CfWYHshD$h" role="1aj_42">
            <node concept="1agwSB" id="4CfWYHshD$i" role="3XIRFZ">
              <property role="1agXu4" value="false" />
              <property role="1agXu6" value="false" />
              <property role="TrG5h" value="e" />
            </node>
            <node concept="1agwSJ" id="4CfWYHshD$j" role="3XIRFZ">
              <property role="TrG5h" value="AnyState" />
              <node concept="1agwVv" id="4CfWYHshD$k" role="2C2TGm">
                <property role="2caQfQ" value="false" />
                <property role="2c7vTL" value="false" />
              </node>
              <node concept="3XIRFW" id="4CfWYHshD$l" role="1ajRlt" />
            </node>
            <node concept="1agwSI" id="4CfWYHshD$m" role="3XIRFZ">
              <property role="TrG5h" value="t1" />
              <ref role="1ajVsX" node="4CfWYHshD$j" resolve="AnyState" />
              <ref role="1ajVsQ" node="4CfWYHshD$j" resolve="AnyState" />
              <node concept="3TlMhK" id="4CfWYHshD$n" role="1ajVsJ" />
              <node concept="1agwSD" id="4CfWYHshD$o" role="1ajVsE">
                <ref role="1aj2X4" node="4CfWYHshD$i" resolve="e" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="2NXPZ9" id="4CfWYHshDvs" role="N3F5h">
      <property role="TrG5h" value="empty_1465788081660_140" />
    </node>
    <node concept="2NXPZ9" id="4CfWYHshDxO" role="N3F5h">
      <property role="TrG5h" value="empty_1465788081907_141" />
    </node>
    <node concept="1agwVr" id="4CfWYHshsCR" role="N3F5h">
      <property role="TrG5h" value="Singleton" />
      <node concept="3XIRFW" id="4CfWYHshsCS" role="1agGRU">
        <node concept="1agwSz" id="4CfWYHshsCT" role="3XIRFZ">
          <property role="TrG5h" value="main" />
          <ref role="1aj_4c" node="4CfWYHshsGL" resolve="AnyState" />
          <node concept="1agwVs" id="4CfWYHshsCU" role="2C2TGm">
            <property role="2caQfQ" value="false" />
            <property role="2c7vTL" value="false" />
          </node>
          <node concept="3XIRFW" id="4CfWYHshsCX" role="1aj_42">
            <node concept="1agwSB" id="4CfWYHshsFA" role="3XIRFZ">
              <property role="1agXu4" value="false" />
              <property role="1agXu6" value="false" />
              <property role="TrG5h" value="e" />
            </node>
            <node concept="1agwSJ" id="4CfWYHshsGL" role="3XIRFZ">
              <property role="TrG5h" value="AnyState" />
              <node concept="1agwVv" id="4CfWYHshsGM" role="2C2TGm">
                <property role="2caQfQ" value="false" />
                <property role="2c7vTL" value="false" />
              </node>
              <node concept="3XIRFW" id="4CfWYHshsGN" role="1ajRlt" />
            </node>
            <node concept="1agwSI" id="4CfWYHshsHj" role="3XIRFZ">
              <property role="TrG5h" value="t1" />
              <ref role="1ajVsQ" node="4CfWYHshsGL" resolve="AnyState" />
              <ref role="1ajVsX" node="4CfWYHshsGL" resolve="AnyState" />
              <node concept="3TlMhK" id="4CfWYHshsHI" role="1ajVsJ" />
              <node concept="1agwSD" id="4CfWYHshsHt" role="1ajVsE">
                <ref role="1aj2X4" node="4CfWYHshsFA" resolve="e" />
              </node>
            </node>
          </node>
        </node>
      </node>
    </node>
    <node concept="3GEVxB" id="4CfWYHshsg3" role="2OODSX">
      <ref role="3GEb4d" to="ryp7:4CfWYHsf2qd" resolve="BSML_stub" />
    </node>
    <node concept="3GEVxB" id="4CfWYHshsg8" role="2OODSX">
      <ref role="3GEb4d" to="h3cf:4CfWYHsf2VG" resolve="stdlib_stub" />
    </node>
    <node concept="3GEVxB" id="4CfWYHshsgg" role="2OODSX">
      <ref role="3GEb4d" to="h3cf:4CfWYHsf775" resolve="glib_Thread_stub" />
    </node>
  </node>
</model>

