## Contents

```sh
outlet
├── Config.in       # kconfig file
├── aos.mk          # aos build system file(for make)
├── app.config      # aos app config file
├── main.c          # program entry main()
└── app_main.c      # application entry application_start()
```

## Introduction

FUMIOT Wifi开关示例，使用方法见[入门指南](../../AnIotStartGuide.md)*WiFi智能插座*章节

### DependenciesF

### Supported Boards

- NodeMCU-32S

### Build

```
$ aos make
$ aos upload
```

