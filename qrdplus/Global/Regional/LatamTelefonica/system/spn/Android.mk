LOCAL_PATH := $(call my-dir)

$(shell mkdir -p $(TARGET_OUT)/vendor/LatamTelefonica/system/etc)
$(shell cp -r $(LOCAL_PATH)/spn-conf.xml $(TARGET_OUT)/vendor/LatamTelefonica/system/etc)
