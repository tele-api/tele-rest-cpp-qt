/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUser::OAIUser(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser::OAIUser() {
    this->initializeModel();
}

OAIUser::~OAIUser() {}

void OAIUser::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_is_bot_isSet = false;
    m_is_bot_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_language_code_isSet = false;
    m_language_code_isValid = false;

    m_is_premium_isSet = false;
    m_is_premium_isValid = false;

    m_added_to_attachment_menu_isSet = false;
    m_added_to_attachment_menu_isValid = false;

    m_can_join_groups_isSet = false;
    m_can_join_groups_isValid = false;

    m_can_read_all_group_messages_isSet = false;
    m_can_read_all_group_messages_isValid = false;

    m_supports_inline_queries_isSet = false;
    m_supports_inline_queries_isValid = false;

    m_can_connect_to_business_isSet = false;
    m_can_connect_to_business_isValid = false;

    m_has_main_web_app_isSet = false;
    m_has_main_web_app_isValid = false;
}

void OAIUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_is_bot_isValid = ::tele_rest::fromJsonValue(m_is_bot, json[QString("is_bot")]);
    m_is_bot_isSet = !json[QString("is_bot")].isNull() && m_is_bot_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_username_isValid = ::tele_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_language_code_isValid = ::tele_rest::fromJsonValue(m_language_code, json[QString("language_code")]);
    m_language_code_isSet = !json[QString("language_code")].isNull() && m_language_code_isValid;

    m_is_premium_isValid = ::tele_rest::fromJsonValue(m_is_premium, json[QString("is_premium")]);
    m_is_premium_isSet = !json[QString("is_premium")].isNull() && m_is_premium_isValid;

    m_added_to_attachment_menu_isValid = ::tele_rest::fromJsonValue(m_added_to_attachment_menu, json[QString("added_to_attachment_menu")]);
    m_added_to_attachment_menu_isSet = !json[QString("added_to_attachment_menu")].isNull() && m_added_to_attachment_menu_isValid;

    m_can_join_groups_isValid = ::tele_rest::fromJsonValue(m_can_join_groups, json[QString("can_join_groups")]);
    m_can_join_groups_isSet = !json[QString("can_join_groups")].isNull() && m_can_join_groups_isValid;

    m_can_read_all_group_messages_isValid = ::tele_rest::fromJsonValue(m_can_read_all_group_messages, json[QString("can_read_all_group_messages")]);
    m_can_read_all_group_messages_isSet = !json[QString("can_read_all_group_messages")].isNull() && m_can_read_all_group_messages_isValid;

    m_supports_inline_queries_isValid = ::tele_rest::fromJsonValue(m_supports_inline_queries, json[QString("supports_inline_queries")]);
    m_supports_inline_queries_isSet = !json[QString("supports_inline_queries")].isNull() && m_supports_inline_queries_isValid;

    m_can_connect_to_business_isValid = ::tele_rest::fromJsonValue(m_can_connect_to_business, json[QString("can_connect_to_business")]);
    m_can_connect_to_business_isSet = !json[QString("can_connect_to_business")].isNull() && m_can_connect_to_business_isValid;

    m_has_main_web_app_isValid = ::tele_rest::fromJsonValue(m_has_main_web_app, json[QString("has_main_web_app")]);
    m_has_main_web_app_isSet = !json[QString("has_main_web_app")].isNull() && m_has_main_web_app_isValid;
}

QString OAIUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_is_bot_isSet) {
        obj.insert(QString("is_bot"), ::tele_rest::toJsonValue(m_is_bot));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::tele_rest::toJsonValue(m_username));
    }
    if (m_language_code_isSet) {
        obj.insert(QString("language_code"), ::tele_rest::toJsonValue(m_language_code));
    }
    if (m_is_premium_isSet) {
        obj.insert(QString("is_premium"), ::tele_rest::toJsonValue(m_is_premium));
    }
    if (m_added_to_attachment_menu_isSet) {
        obj.insert(QString("added_to_attachment_menu"), ::tele_rest::toJsonValue(m_added_to_attachment_menu));
    }
    if (m_can_join_groups_isSet) {
        obj.insert(QString("can_join_groups"), ::tele_rest::toJsonValue(m_can_join_groups));
    }
    if (m_can_read_all_group_messages_isSet) {
        obj.insert(QString("can_read_all_group_messages"), ::tele_rest::toJsonValue(m_can_read_all_group_messages));
    }
    if (m_supports_inline_queries_isSet) {
        obj.insert(QString("supports_inline_queries"), ::tele_rest::toJsonValue(m_supports_inline_queries));
    }
    if (m_can_connect_to_business_isSet) {
        obj.insert(QString("can_connect_to_business"), ::tele_rest::toJsonValue(m_can_connect_to_business));
    }
    if (m_has_main_web_app_isSet) {
        obj.insert(QString("has_main_web_app"), ::tele_rest::toJsonValue(m_has_main_web_app));
    }
    return obj;
}

qint32 OAIUser::getId() const {
    return m_id;
}
void OAIUser::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIUser::is_id_Set() const{
    return m_id_isSet;
}

bool OAIUser::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIUser::isIsBot() const {
    return m_is_bot;
}
void OAIUser::setIsBot(const bool &is_bot) {
    m_is_bot = is_bot;
    m_is_bot_isSet = true;
}

bool OAIUser::is_is_bot_Set() const{
    return m_is_bot_isSet;
}

bool OAIUser::is_is_bot_Valid() const{
    return m_is_bot_isValid;
}

QString OAIUser::getFirstName() const {
    return m_first_name;
}
void OAIUser::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIUser::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIUser::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIUser::getLastName() const {
    return m_last_name;
}
void OAIUser::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIUser::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIUser::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAIUser::getUsername() const {
    return m_username;
}
void OAIUser::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIUser::is_username_Set() const{
    return m_username_isSet;
}

bool OAIUser::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIUser::getLanguageCode() const {
    return m_language_code;
}
void OAIUser::setLanguageCode(const QString &language_code) {
    m_language_code = language_code;
    m_language_code_isSet = true;
}

bool OAIUser::is_language_code_Set() const{
    return m_language_code_isSet;
}

bool OAIUser::is_language_code_Valid() const{
    return m_language_code_isValid;
}

bool OAIUser::isIsPremium() const {
    return m_is_premium;
}
void OAIUser::setIsPremium(const bool &is_premium) {
    m_is_premium = is_premium;
    m_is_premium_isSet = true;
}

bool OAIUser::is_is_premium_Set() const{
    return m_is_premium_isSet;
}

bool OAIUser::is_is_premium_Valid() const{
    return m_is_premium_isValid;
}

bool OAIUser::isAddedToAttachmentMenu() const {
    return m_added_to_attachment_menu;
}
void OAIUser::setAddedToAttachmentMenu(const bool &added_to_attachment_menu) {
    m_added_to_attachment_menu = added_to_attachment_menu;
    m_added_to_attachment_menu_isSet = true;
}

bool OAIUser::is_added_to_attachment_menu_Set() const{
    return m_added_to_attachment_menu_isSet;
}

bool OAIUser::is_added_to_attachment_menu_Valid() const{
    return m_added_to_attachment_menu_isValid;
}

bool OAIUser::isCanJoinGroups() const {
    return m_can_join_groups;
}
void OAIUser::setCanJoinGroups(const bool &can_join_groups) {
    m_can_join_groups = can_join_groups;
    m_can_join_groups_isSet = true;
}

bool OAIUser::is_can_join_groups_Set() const{
    return m_can_join_groups_isSet;
}

bool OAIUser::is_can_join_groups_Valid() const{
    return m_can_join_groups_isValid;
}

bool OAIUser::isCanReadAllGroupMessages() const {
    return m_can_read_all_group_messages;
}
void OAIUser::setCanReadAllGroupMessages(const bool &can_read_all_group_messages) {
    m_can_read_all_group_messages = can_read_all_group_messages;
    m_can_read_all_group_messages_isSet = true;
}

bool OAIUser::is_can_read_all_group_messages_Set() const{
    return m_can_read_all_group_messages_isSet;
}

bool OAIUser::is_can_read_all_group_messages_Valid() const{
    return m_can_read_all_group_messages_isValid;
}

bool OAIUser::isSupportsInlineQueries() const {
    return m_supports_inline_queries;
}
void OAIUser::setSupportsInlineQueries(const bool &supports_inline_queries) {
    m_supports_inline_queries = supports_inline_queries;
    m_supports_inline_queries_isSet = true;
}

bool OAIUser::is_supports_inline_queries_Set() const{
    return m_supports_inline_queries_isSet;
}

bool OAIUser::is_supports_inline_queries_Valid() const{
    return m_supports_inline_queries_isValid;
}

bool OAIUser::isCanConnectToBusiness() const {
    return m_can_connect_to_business;
}
void OAIUser::setCanConnectToBusiness(const bool &can_connect_to_business) {
    m_can_connect_to_business = can_connect_to_business;
    m_can_connect_to_business_isSet = true;
}

bool OAIUser::is_can_connect_to_business_Set() const{
    return m_can_connect_to_business_isSet;
}

bool OAIUser::is_can_connect_to_business_Valid() const{
    return m_can_connect_to_business_isValid;
}

bool OAIUser::isHasMainWebApp() const {
    return m_has_main_web_app;
}
void OAIUser::setHasMainWebApp(const bool &has_main_web_app) {
    m_has_main_web_app = has_main_web_app;
    m_has_main_web_app_isSet = true;
}

bool OAIUser::is_has_main_web_app_Set() const{
    return m_has_main_web_app_isSet;
}

bool OAIUser::is_has_main_web_app_Valid() const{
    return m_has_main_web_app_isValid;
}

bool OAIUser::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_bot_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_language_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_premium_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_added_to_attachment_menu_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_join_groups_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_read_all_group_messages_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_supports_inline_queries_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_connect_to_business_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_main_web_app_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_is_bot_isValid && m_first_name_isValid && true;
}

} // namespace tele_rest
