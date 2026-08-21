#include <app-common/zap-generated/callback.h>
#include <app-common/zap-generated/ids/Clusters.h>
#include <lib/support/Span.h>
#include <protocols/interaction_model/Constants.h>

using namespace chip;

// Cluster Init Functions
void emberAfClusterInitCallback(EndpointId endpoint, ClusterId clusterId)
{
	switch (clusterId) {
	case app::Clusters::AccessControl::Id:
		emberAfAccessControlClusterInitCallback(endpoint);
		break;
	case app::Clusters::AdministratorCommissioning::Id:
		emberAfAdministratorCommissioningClusterInitCallback(endpoint);
		break;
	case app::Clusters::BasicInformation::Id:
		emberAfBasicInformationClusterInitCallback(endpoint);
		break;
	case app::Clusters::Binding::Id:
		emberAfBindingClusterInitCallback(endpoint);
		break;
	case app::Clusters::Descriptor::Id:
		emberAfDescriptorClusterInitCallback(endpoint);
		break;
	case app::Clusters::DiagnosticLogs::Id:
		emberAfDiagnosticLogsClusterInitCallback(endpoint);
		break;
	case app::Clusters::GeneralCommissioning::Id:
		emberAfGeneralCommissioningClusterInitCallback(endpoint);
		break;
	case app::Clusters::GeneralDiagnostics::Id:
		emberAfGeneralDiagnosticsClusterInitCallback(endpoint);
		break;
	case app::Clusters::GroupKeyManagement::Id:
		emberAfGroupKeyManagementClusterInitCallback(endpoint);
		break;
	case app::Clusters::IcdManagement::Id:
		emberAfIcdManagementClusterInitCallback(endpoint);
		break;
	case app::Clusters::Identify::Id:
		emberAfIdentifyClusterInitCallback(endpoint);
		break;
	case app::Clusters::NetworkCommissioning::Id:
		emberAfNetworkCommissioningClusterInitCallback(endpoint);
		break;
	case app::Clusters::OperationalCredentials::Id:
		emberAfOperationalCredentialsClusterInitCallback(endpoint);
		break;
	case app::Clusters::OtaSoftwareUpdateRequestor::Id:
		emberAfOtaSoftwareUpdateRequestorClusterInitCallback(endpoint);
		break;
	case app::Clusters::SoftwareDiagnostics::Id:
		emberAfSoftwareDiagnosticsClusterInitCallback(endpoint);
		break;
	case app::Clusters::ThreadNetworkDiagnostics::Id:
		emberAfThreadNetworkDiagnosticsClusterInitCallback(endpoint);
		break;
	case app::Clusters::WiFiNetworkDiagnostics::Id:
		emberAfWiFiNetworkDiagnosticsClusterInitCallback(endpoint);
		break;
	default:
		// Unrecognized cluster ID
		break;
	}
}

// Cluster Shutdown Functions
void emberAfClusterShutdownCallback(EndpointId endpoint, ClusterId clusterId)
{
	switch (clusterId) {
	case app::Clusters::AccessControl::Id:
		emberAfAccessControlClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::AdministratorCommissioning::Id:
		emberAfAdministratorCommissioningClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::BasicInformation::Id:
		emberAfBasicInformationClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::Binding::Id:
		emberAfBindingClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::Descriptor::Id:
		emberAfDescriptorClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::DiagnosticLogs::Id:
		emberAfDiagnosticLogsClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::GeneralCommissioning::Id:
		emberAfGeneralCommissioningClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::GeneralDiagnostics::Id:
		emberAfGeneralDiagnosticsClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::GroupKeyManagement::Id:
		emberAfGroupKeyManagementClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::IcdManagement::Id:
		emberAfIcdManagementClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::Identify::Id:
		emberAfIdentifyClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::NetworkCommissioning::Id:
		emberAfNetworkCommissioningClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::OperationalCredentials::Id:
		emberAfOperationalCredentialsClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::OtaSoftwareUpdateRequestor::Id:
		emberAfOtaSoftwareUpdateRequestorClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::SoftwareDiagnostics::Id:
		emberAfSoftwareDiagnosticsClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::ThreadNetworkDiagnostics::Id:
		emberAfThreadNetworkDiagnosticsClusterShutdownCallback(endpoint);
		break;
	case app::Clusters::WiFiNetworkDiagnostics::Id:
		emberAfWiFiNetworkDiagnosticsClusterShutdownCallback(endpoint);
		break;
	default:
		// Unrecognized cluster ID
		break;
	}
}

#include <app-common/zap-generated/callback.h>

using namespace chip;
void __attribute__((weak)) emberAfAccessControlClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfAccessControlClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfAdministratorCommissioningClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfAdministratorCommissioningClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfBasicInformationClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfBasicInformationClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfBindingClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfBindingClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfDescriptorClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfDescriptorClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfDiagnosticLogsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfDiagnosticLogsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGeneralCommissioningClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGeneralCommissioningClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGeneralDiagnosticsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGeneralDiagnosticsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGroupKeyManagementClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfGroupKeyManagementClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfIcdManagementClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfIcdManagementClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfIdentifyClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfIdentifyClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfNetworkCommissioningClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfNetworkCommissioningClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfOperationalCredentialsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfOperationalCredentialsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfOtaSoftwareUpdateRequestorClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfOtaSoftwareUpdateRequestorClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfSoftwareDiagnosticsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfSoftwareDiagnosticsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfThreadNetworkDiagnosticsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfThreadNetworkDiagnosticsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfWiFiNetworkDiagnosticsClusterInitCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
void __attribute__((weak)) emberAfWiFiNetworkDiagnosticsClusterShutdownCallback(EndpointId endpoint)
{
	// To prevent warning
	(void)endpoint;
}
