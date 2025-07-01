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

#include "OAITransactionPartnerUser.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAITransactionPartnerUser::OAITransactionPartnerUser(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITransactionPartnerUser::OAITransactionPartnerUser() {
    this->initializeModel();
}

OAITransactionPartnerUser::~OAITransactionPartnerUser() {}

void OAITransactionPartnerUser::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_transaction_type_isSet = false;
    m_transaction_type_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_affiliate_isSet = false;
    m_affiliate_isValid = false;

    m_invoice_payload_isSet = false;
    m_invoice_payload_isValid = false;

    m_subscription_period_isSet = false;
    m_subscription_period_isValid = false;

    m_paid_media_isSet = false;
    m_paid_media_isValid = false;

    m_paid_media_payload_isSet = false;
    m_paid_media_payload_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_premium_subscription_duration_isSet = false;
    m_premium_subscription_duration_isValid = false;
}

void OAITransactionPartnerUser::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITransactionPartnerUser::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_transaction_type_isValid = ::tele_rest::fromJsonValue(m_transaction_type, json[QString("transaction_type")]);
    m_transaction_type_isSet = !json[QString("transaction_type")].isNull() && m_transaction_type_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_affiliate_isValid = ::tele_rest::fromJsonValue(m_affiliate, json[QString("affiliate")]);
    m_affiliate_isSet = !json[QString("affiliate")].isNull() && m_affiliate_isValid;

    m_invoice_payload_isValid = ::tele_rest::fromJsonValue(m_invoice_payload, json[QString("invoice_payload")]);
    m_invoice_payload_isSet = !json[QString("invoice_payload")].isNull() && m_invoice_payload_isValid;

    m_subscription_period_isValid = ::tele_rest::fromJsonValue(m_subscription_period, json[QString("subscription_period")]);
    m_subscription_period_isSet = !json[QString("subscription_period")].isNull() && m_subscription_period_isValid;

    m_paid_media_isValid = ::tele_rest::fromJsonValue(m_paid_media, json[QString("paid_media")]);
    m_paid_media_isSet = !json[QString("paid_media")].isNull() && m_paid_media_isValid;

    m_paid_media_payload_isValid = ::tele_rest::fromJsonValue(m_paid_media_payload, json[QString("paid_media_payload")]);
    m_paid_media_payload_isSet = !json[QString("paid_media_payload")].isNull() && m_paid_media_payload_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_premium_subscription_duration_isValid = ::tele_rest::fromJsonValue(m_premium_subscription_duration, json[QString("premium_subscription_duration")]);
    m_premium_subscription_duration_isSet = !json[QString("premium_subscription_duration")].isNull() && m_premium_subscription_duration_isValid;
}

QString OAITransactionPartnerUser::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITransactionPartnerUser::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_transaction_type_isSet) {
        obj.insert(QString("transaction_type"), ::tele_rest::toJsonValue(m_transaction_type));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_affiliate.isSet()) {
        obj.insert(QString("affiliate"), ::tele_rest::toJsonValue(m_affiliate));
    }
    if (m_invoice_payload_isSet) {
        obj.insert(QString("invoice_payload"), ::tele_rest::toJsonValue(m_invoice_payload));
    }
    if (m_subscription_period_isSet) {
        obj.insert(QString("subscription_period"), ::tele_rest::toJsonValue(m_subscription_period));
    }
    if (m_paid_media.size() > 0) {
        obj.insert(QString("paid_media"), ::tele_rest::toJsonValue(m_paid_media));
    }
    if (m_paid_media_payload_isSet) {
        obj.insert(QString("paid_media_payload"), ::tele_rest::toJsonValue(m_paid_media_payload));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_premium_subscription_duration_isSet) {
        obj.insert(QString("premium_subscription_duration"), ::tele_rest::toJsonValue(m_premium_subscription_duration));
    }
    return obj;
}

QString OAITransactionPartnerUser::getType() const {
    return m_type;
}
void OAITransactionPartnerUser::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAITransactionPartnerUser::is_type_Set() const{
    return m_type_isSet;
}

bool OAITransactionPartnerUser::is_type_Valid() const{
    return m_type_isValid;
}

QString OAITransactionPartnerUser::getTransactionType() const {
    return m_transaction_type;
}
void OAITransactionPartnerUser::setTransactionType(const QString &transaction_type) {
    m_transaction_type = transaction_type;
    m_transaction_type_isSet = true;
}

bool OAITransactionPartnerUser::is_transaction_type_Set() const{
    return m_transaction_type_isSet;
}

bool OAITransactionPartnerUser::is_transaction_type_Valid() const{
    return m_transaction_type_isValid;
}

OAIUser OAITransactionPartnerUser::getUser() const {
    return m_user;
}
void OAITransactionPartnerUser::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAITransactionPartnerUser::is_user_Set() const{
    return m_user_isSet;
}

bool OAITransactionPartnerUser::is_user_Valid() const{
    return m_user_isValid;
}

OAIAffiliateInfo OAITransactionPartnerUser::getAffiliate() const {
    return m_affiliate;
}
void OAITransactionPartnerUser::setAffiliate(const OAIAffiliateInfo &affiliate) {
    m_affiliate = affiliate;
    m_affiliate_isSet = true;
}

bool OAITransactionPartnerUser::is_affiliate_Set() const{
    return m_affiliate_isSet;
}

bool OAITransactionPartnerUser::is_affiliate_Valid() const{
    return m_affiliate_isValid;
}

QString OAITransactionPartnerUser::getInvoicePayload() const {
    return m_invoice_payload;
}
void OAITransactionPartnerUser::setInvoicePayload(const QString &invoice_payload) {
    m_invoice_payload = invoice_payload;
    m_invoice_payload_isSet = true;
}

bool OAITransactionPartnerUser::is_invoice_payload_Set() const{
    return m_invoice_payload_isSet;
}

bool OAITransactionPartnerUser::is_invoice_payload_Valid() const{
    return m_invoice_payload_isValid;
}

qint32 OAITransactionPartnerUser::getSubscriptionPeriod() const {
    return m_subscription_period;
}
void OAITransactionPartnerUser::setSubscriptionPeriod(const qint32 &subscription_period) {
    m_subscription_period = subscription_period;
    m_subscription_period_isSet = true;
}

bool OAITransactionPartnerUser::is_subscription_period_Set() const{
    return m_subscription_period_isSet;
}

bool OAITransactionPartnerUser::is_subscription_period_Valid() const{
    return m_subscription_period_isValid;
}

QList<OAIPaidMedia> OAITransactionPartnerUser::getPaidMedia() const {
    return m_paid_media;
}
void OAITransactionPartnerUser::setPaidMedia(const QList<OAIPaidMedia> &paid_media) {
    m_paid_media = paid_media;
    m_paid_media_isSet = true;
}

bool OAITransactionPartnerUser::is_paid_media_Set() const{
    return m_paid_media_isSet;
}

bool OAITransactionPartnerUser::is_paid_media_Valid() const{
    return m_paid_media_isValid;
}

QString OAITransactionPartnerUser::getPaidMediaPayload() const {
    return m_paid_media_payload;
}
void OAITransactionPartnerUser::setPaidMediaPayload(const QString &paid_media_payload) {
    m_paid_media_payload = paid_media_payload;
    m_paid_media_payload_isSet = true;
}

bool OAITransactionPartnerUser::is_paid_media_payload_Set() const{
    return m_paid_media_payload_isSet;
}

bool OAITransactionPartnerUser::is_paid_media_payload_Valid() const{
    return m_paid_media_payload_isValid;
}

OAIGift OAITransactionPartnerUser::getGift() const {
    return m_gift;
}
void OAITransactionPartnerUser::setGift(const OAIGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAITransactionPartnerUser::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAITransactionPartnerUser::is_gift_Valid() const{
    return m_gift_isValid;
}

qint32 OAITransactionPartnerUser::getPremiumSubscriptionDuration() const {
    return m_premium_subscription_duration;
}
void OAITransactionPartnerUser::setPremiumSubscriptionDuration(const qint32 &premium_subscription_duration) {
    m_premium_subscription_duration = premium_subscription_duration;
    m_premium_subscription_duration_isSet = true;
}

bool OAITransactionPartnerUser::is_premium_subscription_duration_Set() const{
    return m_premium_subscription_duration_isSet;
}

bool OAITransactionPartnerUser::is_premium_subscription_duration_Valid() const{
    return m_premium_subscription_duration_isValid;
}

bool OAITransactionPartnerUser::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_transaction_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_affiliate.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITransactionPartnerUser::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_transaction_type_isValid && m_user_isValid && true;
}

} // namespace tele_rest
