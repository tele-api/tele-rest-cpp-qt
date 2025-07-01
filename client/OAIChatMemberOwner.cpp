/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIChatMemberOwner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatMemberOwner::OAIChatMemberOwner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatMemberOwner::OAIChatMemberOwner() {
    this->initializeModel();
}

OAIChatMemberOwner::~OAIChatMemberOwner() {}

void OAIChatMemberOwner::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_is_anonymous_isSet = false;
    m_is_anonymous_isValid = false;

    m_custom_title_isSet = false;
    m_custom_title_isValid = false;
}

void OAIChatMemberOwner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatMemberOwner::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::tele_rest::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_is_anonymous_isValid = ::tele_rest::fromJsonValue(m_is_anonymous, json[QString("is_anonymous")]);
    m_is_anonymous_isSet = !json[QString("is_anonymous")].isNull() && m_is_anonymous_isValid;

    m_custom_title_isValid = ::tele_rest::fromJsonValue(m_custom_title, json[QString("custom_title")]);
    m_custom_title_isSet = !json[QString("custom_title")].isNull() && m_custom_title_isValid;
}

QString OAIChatMemberOwner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatMemberOwner::asJsonObject() const {
    QJsonObject obj;
    if (m_status_isSet) {
        obj.insert(QString("status"), ::tele_rest::toJsonValue(m_status));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_is_anonymous_isSet) {
        obj.insert(QString("is_anonymous"), ::tele_rest::toJsonValue(m_is_anonymous));
    }
    if (m_custom_title_isSet) {
        obj.insert(QString("custom_title"), ::tele_rest::toJsonValue(m_custom_title));
    }
    return obj;
}

QString OAIChatMemberOwner::getStatus() const {
    return m_status;
}
void OAIChatMemberOwner::setStatus(const QString &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIChatMemberOwner::is_status_Set() const{
    return m_status_isSet;
}

bool OAIChatMemberOwner::is_status_Valid() const{
    return m_status_isValid;
}

OAIUser OAIChatMemberOwner::getUser() const {
    return m_user;
}
void OAIChatMemberOwner::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIChatMemberOwner::is_user_Set() const{
    return m_user_isSet;
}

bool OAIChatMemberOwner::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIChatMemberOwner::isIsAnonymous() const {
    return m_is_anonymous;
}
void OAIChatMemberOwner::setIsAnonymous(const bool &is_anonymous) {
    m_is_anonymous = is_anonymous;
    m_is_anonymous_isSet = true;
}

bool OAIChatMemberOwner::is_is_anonymous_Set() const{
    return m_is_anonymous_isSet;
}

bool OAIChatMemberOwner::is_is_anonymous_Valid() const{
    return m_is_anonymous_isValid;
}

QString OAIChatMemberOwner::getCustomTitle() const {
    return m_custom_title;
}
void OAIChatMemberOwner::setCustomTitle(const QString &custom_title) {
    m_custom_title = custom_title;
    m_custom_title_isSet = true;
}

bool OAIChatMemberOwner::is_custom_title_Set() const{
    return m_custom_title_isSet;
}

bool OAIChatMemberOwner::is_custom_title_Valid() const{
    return m_custom_title_isValid;
}

bool OAIChatMemberOwner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_anonymous_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_title_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatMemberOwner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_status_isValid && m_user_isValid && m_is_anonymous_isValid && true;
}

} // namespace tele_rest
