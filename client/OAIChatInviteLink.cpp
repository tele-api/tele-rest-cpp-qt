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

#include "OAIChatInviteLink.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIChatInviteLink::OAIChatInviteLink(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIChatInviteLink::OAIChatInviteLink() {
    this->initializeModel();
}

OAIChatInviteLink::~OAIChatInviteLink() {}

void OAIChatInviteLink::initializeModel() {

    m_invite_link_isSet = false;
    m_invite_link_isValid = false;

    m_creator_isSet = false;
    m_creator_isValid = false;

    m_creates_join_request_isSet = false;
    m_creates_join_request_isValid = false;

    m_is_primary_isSet = false;
    m_is_primary_isValid = false;

    m_is_revoked_isSet = false;
    m_is_revoked_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_expire_date_isSet = false;
    m_expire_date_isValid = false;

    m_member_limit_isSet = false;
    m_member_limit_isValid = false;

    m_pending_join_request_count_isSet = false;
    m_pending_join_request_count_isValid = false;

    m_subscription_period_isSet = false;
    m_subscription_period_isValid = false;

    m_subscription_price_isSet = false;
    m_subscription_price_isValid = false;
}

void OAIChatInviteLink::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIChatInviteLink::fromJsonObject(QJsonObject json) {

    m_invite_link_isValid = ::tele_rest::fromJsonValue(m_invite_link, json[QString("invite_link")]);
    m_invite_link_isSet = !json[QString("invite_link")].isNull() && m_invite_link_isValid;

    m_creator_isValid = ::tele_rest::fromJsonValue(m_creator, json[QString("creator")]);
    m_creator_isSet = !json[QString("creator")].isNull() && m_creator_isValid;

    m_creates_join_request_isValid = ::tele_rest::fromJsonValue(m_creates_join_request, json[QString("creates_join_request")]);
    m_creates_join_request_isSet = !json[QString("creates_join_request")].isNull() && m_creates_join_request_isValid;

    m_is_primary_isValid = ::tele_rest::fromJsonValue(m_is_primary, json[QString("is_primary")]);
    m_is_primary_isSet = !json[QString("is_primary")].isNull() && m_is_primary_isValid;

    m_is_revoked_isValid = ::tele_rest::fromJsonValue(m_is_revoked, json[QString("is_revoked")]);
    m_is_revoked_isSet = !json[QString("is_revoked")].isNull() && m_is_revoked_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_expire_date_isValid = ::tele_rest::fromJsonValue(m_expire_date, json[QString("expire_date")]);
    m_expire_date_isSet = !json[QString("expire_date")].isNull() && m_expire_date_isValid;

    m_member_limit_isValid = ::tele_rest::fromJsonValue(m_member_limit, json[QString("member_limit")]);
    m_member_limit_isSet = !json[QString("member_limit")].isNull() && m_member_limit_isValid;

    m_pending_join_request_count_isValid = ::tele_rest::fromJsonValue(m_pending_join_request_count, json[QString("pending_join_request_count")]);
    m_pending_join_request_count_isSet = !json[QString("pending_join_request_count")].isNull() && m_pending_join_request_count_isValid;

    m_subscription_period_isValid = ::tele_rest::fromJsonValue(m_subscription_period, json[QString("subscription_period")]);
    m_subscription_period_isSet = !json[QString("subscription_period")].isNull() && m_subscription_period_isValid;

    m_subscription_price_isValid = ::tele_rest::fromJsonValue(m_subscription_price, json[QString("subscription_price")]);
    m_subscription_price_isSet = !json[QString("subscription_price")].isNull() && m_subscription_price_isValid;
}

QString OAIChatInviteLink::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIChatInviteLink::asJsonObject() const {
    QJsonObject obj;
    if (m_invite_link_isSet) {
        obj.insert(QString("invite_link"), ::tele_rest::toJsonValue(m_invite_link));
    }
    if (m_creator.isSet()) {
        obj.insert(QString("creator"), ::tele_rest::toJsonValue(m_creator));
    }
    if (m_creates_join_request_isSet) {
        obj.insert(QString("creates_join_request"), ::tele_rest::toJsonValue(m_creates_join_request));
    }
    if (m_is_primary_isSet) {
        obj.insert(QString("is_primary"), ::tele_rest::toJsonValue(m_is_primary));
    }
    if (m_is_revoked_isSet) {
        obj.insert(QString("is_revoked"), ::tele_rest::toJsonValue(m_is_revoked));
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
    if (m_pending_join_request_count_isSet) {
        obj.insert(QString("pending_join_request_count"), ::tele_rest::toJsonValue(m_pending_join_request_count));
    }
    if (m_subscription_period_isSet) {
        obj.insert(QString("subscription_period"), ::tele_rest::toJsonValue(m_subscription_period));
    }
    if (m_subscription_price_isSet) {
        obj.insert(QString("subscription_price"), ::tele_rest::toJsonValue(m_subscription_price));
    }
    return obj;
}

QString OAIChatInviteLink::getInviteLink() const {
    return m_invite_link;
}
void OAIChatInviteLink::setInviteLink(const QString &invite_link) {
    m_invite_link = invite_link;
    m_invite_link_isSet = true;
}

bool OAIChatInviteLink::is_invite_link_Set() const{
    return m_invite_link_isSet;
}

bool OAIChatInviteLink::is_invite_link_Valid() const{
    return m_invite_link_isValid;
}

OAIUser OAIChatInviteLink::getCreator() const {
    return m_creator;
}
void OAIChatInviteLink::setCreator(const OAIUser &creator) {
    m_creator = creator;
    m_creator_isSet = true;
}

bool OAIChatInviteLink::is_creator_Set() const{
    return m_creator_isSet;
}

bool OAIChatInviteLink::is_creator_Valid() const{
    return m_creator_isValid;
}

bool OAIChatInviteLink::isCreatesJoinRequest() const {
    return m_creates_join_request;
}
void OAIChatInviteLink::setCreatesJoinRequest(const bool &creates_join_request) {
    m_creates_join_request = creates_join_request;
    m_creates_join_request_isSet = true;
}

bool OAIChatInviteLink::is_creates_join_request_Set() const{
    return m_creates_join_request_isSet;
}

bool OAIChatInviteLink::is_creates_join_request_Valid() const{
    return m_creates_join_request_isValid;
}

bool OAIChatInviteLink::isIsPrimary() const {
    return m_is_primary;
}
void OAIChatInviteLink::setIsPrimary(const bool &is_primary) {
    m_is_primary = is_primary;
    m_is_primary_isSet = true;
}

bool OAIChatInviteLink::is_is_primary_Set() const{
    return m_is_primary_isSet;
}

bool OAIChatInviteLink::is_is_primary_Valid() const{
    return m_is_primary_isValid;
}

bool OAIChatInviteLink::isIsRevoked() const {
    return m_is_revoked;
}
void OAIChatInviteLink::setIsRevoked(const bool &is_revoked) {
    m_is_revoked = is_revoked;
    m_is_revoked_isSet = true;
}

bool OAIChatInviteLink::is_is_revoked_Set() const{
    return m_is_revoked_isSet;
}

bool OAIChatInviteLink::is_is_revoked_Valid() const{
    return m_is_revoked_isValid;
}

QString OAIChatInviteLink::getName() const {
    return m_name;
}
void OAIChatInviteLink::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIChatInviteLink::is_name_Set() const{
    return m_name_isSet;
}

bool OAIChatInviteLink::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIChatInviteLink::getExpireDate() const {
    return m_expire_date;
}
void OAIChatInviteLink::setExpireDate(const qint32 &expire_date) {
    m_expire_date = expire_date;
    m_expire_date_isSet = true;
}

bool OAIChatInviteLink::is_expire_date_Set() const{
    return m_expire_date_isSet;
}

bool OAIChatInviteLink::is_expire_date_Valid() const{
    return m_expire_date_isValid;
}

qint32 OAIChatInviteLink::getMemberLimit() const {
    return m_member_limit;
}
void OAIChatInviteLink::setMemberLimit(const qint32 &member_limit) {
    m_member_limit = member_limit;
    m_member_limit_isSet = true;
}

bool OAIChatInviteLink::is_member_limit_Set() const{
    return m_member_limit_isSet;
}

bool OAIChatInviteLink::is_member_limit_Valid() const{
    return m_member_limit_isValid;
}

qint32 OAIChatInviteLink::getPendingJoinRequestCount() const {
    return m_pending_join_request_count;
}
void OAIChatInviteLink::setPendingJoinRequestCount(const qint32 &pending_join_request_count) {
    m_pending_join_request_count = pending_join_request_count;
    m_pending_join_request_count_isSet = true;
}

bool OAIChatInviteLink::is_pending_join_request_count_Set() const{
    return m_pending_join_request_count_isSet;
}

bool OAIChatInviteLink::is_pending_join_request_count_Valid() const{
    return m_pending_join_request_count_isValid;
}

qint32 OAIChatInviteLink::getSubscriptionPeriod() const {
    return m_subscription_period;
}
void OAIChatInviteLink::setSubscriptionPeriod(const qint32 &subscription_period) {
    m_subscription_period = subscription_period;
    m_subscription_period_isSet = true;
}

bool OAIChatInviteLink::is_subscription_period_Set() const{
    return m_subscription_period_isSet;
}

bool OAIChatInviteLink::is_subscription_period_Valid() const{
    return m_subscription_period_isValid;
}

qint32 OAIChatInviteLink::getSubscriptionPrice() const {
    return m_subscription_price;
}
void OAIChatInviteLink::setSubscriptionPrice(const qint32 &subscription_price) {
    m_subscription_price = subscription_price;
    m_subscription_price_isSet = true;
}

bool OAIChatInviteLink::is_subscription_price_Set() const{
    return m_subscription_price_isSet;
}

bool OAIChatInviteLink::is_subscription_price_Valid() const{
    return m_subscription_price_isValid;
}

bool OAIChatInviteLink::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_invite_link_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_creator.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_creates_join_request_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_primary_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_revoked_isSet) {
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

        if (m_pending_join_request_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_price_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIChatInviteLink::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_invite_link_isValid && m_creator_isValid && m_creates_join_request_isValid && m_is_primary_isValid && m_is_revoked_isValid && true;
}

} // namespace tele_rest
