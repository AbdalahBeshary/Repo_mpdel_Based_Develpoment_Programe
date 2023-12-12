classdef (Enumeration) MyEnum < Simulink.IntEnumType
    enumeration
        Normal(0)
        DowngradedS1(1)
        DowngradedS2(2)
        Failure(3)
    end
end