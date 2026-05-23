第一版 核心骨架
MiniEngine/
│
├── Engine/                     # 🎯 引擎核心（所有系统都在这里）
│   ├── Core/
│   ├── Application/
│   ├── Window/
│   ├── Renderer/
│   ├── Input/
│   ├── Events/
│   ├── Scene/
│   ├── ECS/
│   ├── Asset/
│   ├── Utils/
│   │
│   ├── Include/               # 对外暴露的API头文件
│   └── Source/                # 内部实现
│
│
├── Sandbox/                   # 🎮 游戏/测试程序（你写demo的地方）
│   ├── Source/
│   └── Assets/               # Sandbox专属资源（可选）
│
│
├── ThirdParty/               # 📦 第三方库
│   ├── GLFW/
│   ├── Glad/
│   ├── glm/
│   ├── stb/
│   ├── assimp/
│   └── imgui/
│
│
├── Assets/                   # 🌍 全局资源（引擎共享）
│   ├── Textures/
│   ├── Models/
│   ├── Shaders/
│   ├── Fonts/
│   └── Audio/
│
│
├── Tools/                    # 🛠 工具（后期编辑器/打包工具）
│   ├── ShaderCompiler/
│   ├── AssetPacker/
│   └── Editor/ (以后做)
│
│
├── Scripts/                  # 📜 自动化脚本（cmake/python/batch）
│
├── Build/                    # 🏗 临时生成目录（VS / CMake）
│
└── Docs/                     # 📚 架构设计/笔记