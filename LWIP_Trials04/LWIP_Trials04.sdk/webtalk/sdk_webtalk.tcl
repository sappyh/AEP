webtalk_init -webtalk_dir /home/sattu-supari/Documents/Sem2/AESP/project/LWIP_Trials04/LWIP_Trials04.sdk/webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "Wed Jul 5 17:49:37 2017" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2015.4" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2015.4" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "6qij3f4p7c84pbenh7dr56qjdd" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2015.4_6" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "6" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "" -context "user_environment"
webtalk_add_data -client project -key os_release -value "" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1499267820000" -context "sdk\\\\bsp/1499267820000"
webtalk_add_data -client sdk -key hwid -value "1499258687000" -context "sdk\\\\bsp/1499267820000"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\bsp/1499267820000"
webtalk_add_data -client sdk -key apptemplate -value "empty_application" -context "sdk\\\\bsp/1499267820000"
webtalk_add_data -client sdk -key uid -value "1499267826000" -context "sdk\\\\application/1499267826000"
webtalk_add_data -client sdk -key hwid -value "1499258687000" -context "sdk\\\\application/1499267826000"
webtalk_add_data -client sdk -key bspid -value "1499267820000" -context "sdk\\\\application/1499267826000"
webtalk_add_data -client sdk -key newbsp -value "true" -context "sdk\\\\application/1499267826000"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\application/1499267826000"
webtalk_add_data -client sdk -key apptemplate -value "empty_application" -context "sdk\\\\application/1499267826000"
webtalk_transmit -clientid 3284206288 -regid "" -xml /home/sattu-supari/Documents/Sem2/AESP/project/LWIP_Trials04/LWIP_Trials04.sdk/webtalk/usage_statistics_ext_sdk.xml -html /home/sattu-supari/Documents/Sem2/AESP/project/LWIP_Trials04/LWIP_Trials04.sdk/webtalk/usage_statistics_ext_sdk.html -wdm /home/sattu-supari/Documents/Sem2/AESP/project/LWIP_Trials04/LWIP_Trials04.sdk/webtalk/sdk_webtalk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
