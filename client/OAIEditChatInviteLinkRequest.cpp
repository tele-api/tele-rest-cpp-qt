/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIEditChatInviteLinkRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIEditChatInviteLinkRequest::OAIEditChatInviteLinkRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEditChatInviteLinkRequest::OAIEditChatInviteLinkRequest() {
    this->initializeModel();
}

OAIEditChatInviteLinkRequest::~OAIEditChatInviteLinkRequest() {}

void OAIEditChatInviteLinkRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_invite_link_isSet = false;
    m_invite_link_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_expire_date_isSet = false;
    m_expire_date_isValid = false;

    m_member_limit_isSet = false;
    m_member_limit_isValid = false;

    m_creates_join_request_isSet = false;
    m_creates_join_request_isValid = false;
}

void OAIEditChatInviteLinkRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEditChatInviteLinkRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_invite_link_isValid = ::tele_rest::fromJsonValue(m_invite_link, json[QString("invite_link")]);
    m_invite_link_isSet = !json[QString("invite_link")].isNull() && m_invite_link_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_expire_date_isValid = ::tele_rest::fromJsonValue(m_expire_date, json[QString("expire_date")]);
    m_expire_date_isSet = !json[QString("expire_date")].isNull() && m_expire_date_isValid;

    m_member_limit_isValid = ::tele_rest::fromJsonValue(m_member_limit, json[QString("member_limit")]);
    m_member_limit_isSet = !json[QString("member_limit")].isNull() && m_member_limit_isValid;

    m_creates_join_request_isValid = ::tele_rest::fromJsonValue(m_creates_join_request, json[QString("creates_join_request")]);
    m_creates_join_request_isSet = !json[QString("creates_join_request")].isNull() && m_creates_join_request_isValid;
}

QString OAIEditChatInviteLinkRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEditChatInviteLinkRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_invite_link_isSet) {
        obj.insert(QString("invite_link"), ::tele_rest::toJsonValue(m_invite_link));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_expire_date_isSet) {
        obj.insert(QString("expire_date"), ::tele_rest::toJsonValue(m_expire_date));
    }
    if (m_member_limit_isSet) {
        obj.insert(QString("member_limit"), ::tele_rest::toJsonValue(m_member_limit));
    }
    if (m_creates_join_request_isSet) {
        obj.insert(QString("creates_join_request"), ::tele_rest::toJsonValue(m_creates_join_request));
    }
    return obj;
}

OAISendMessageRequest_chat_id OAIEditChatInviteLinkRequest::getChatId() const {
    return m_chat_id;
}
void OAIEditChatInviteLinkRequest::setChatId(const OAISendMessageRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAIEditChatInviteLinkRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAIEditChatInviteLinkRequest::getInviteLink() const {
    return m_invite_link;
}
void OAIEditChatInviteLinkRequest::setInviteLink(const QString &invite_link) {
    m_invite_link = invite_link;
    m_invite_link_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_invite_link_Set() const{
    return m_invite_link_isSet;
}

bool OAIEditChatInviteLinkRequest::is_invite_link_Valid() const{
    return m_invite_link_isValid;
}

QString OAIEditChatInviteLinkRequest::getName() const {
    return m_name;
}
void OAIEditChatInviteLinkRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIEditChatInviteLinkRequest::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIEditChatInviteLinkRequest::getExpireDate() const {
    return m_expire_date;
}
void OAIEditChatInviteLinkRequest::setExpireDate(const qint32 &expire_date) {
    m_expire_date = expire_date;
    m_expire_date_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_expire_date_Set() const{
    return m_expire_date_isSet;
}

bool OAIEditChatInviteLinkRequest::is_expire_date_Valid() const{
    return m_expire_date_isValid;
}

qint32 OAIEditChatInviteLinkRequest::getMemberLimit() const {
    return m_member_limit;
}
void OAIEditChatInviteLinkRequest::setMemberLimit(const qint32 &member_limit) {
    m_member_limit = member_limit;
    m_member_limit_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_member_limit_Set() const{
    return m_member_limit_isSet;
}

bool OAIEditChatInviteLinkRequest::is_member_limit_Valid() const{
    return m_member_limit_isValid;
}

bool OAIEditChatInviteLinkRequest::isCreatesJoinRequest() const {
    return m_creates_join_request;
}
void OAIEditChatInviteLinkRequest::setCreatesJoinRequest(const bool &creates_join_request) {
    m_creates_join_request = creates_join_request;
    m_creates_join_request_isSet = true;
}

bool OAIEditChatInviteLinkRequest::is_creates_join_request_Set() const{
    return m_creates_join_request_isSet;
}

bool OAIEditChatInviteLinkRequest::is_creates_join_request_Valid() const{
    return m_creates_join_request_isValid;
}

bool OAIEditChatInviteLinkRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_member_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creates_join_request_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEditChatInviteLinkRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_invite_link_isValid && true;
}

} // namespace tele_rest
